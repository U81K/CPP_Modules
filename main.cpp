#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 100005;

int n, di[MAX_N];
vector<int> adj[MAX_N];

// Stores the maximum water that can reach a leaf if a sink is fixed along the path
int maxWaterWithFix[MAX_N];

// Stores the maximum water that can reach a leaf without fixing any sink
int maxWaterWithoutFix[MAX_N];

void dfs(int u, int parent) {
    int children = 0;
    for (int v : adj[u]) {
        if (v != parent) {
            dfs(v, u);
            children++;
            maxWaterWithFix[u] += max(maxWaterWithFix[v], maxWaterWithoutFix[v]);
            maxWaterWithoutFix[u] += maxWaterWithoutFix[v];
        }
    }

    // If u is a sink, consider fixing it
    if (di[u] < 0) {
        maxWaterWithFix[u] += -di[u] * children; // Correctly account for negative power
    }

    // Pass water to children (if any)
    if (children > 0) {
        maxWaterWithFix[u] /= children;
        maxWaterWithoutFix[u] /= children;
    }

    // Add water power at the node
    maxWaterWithFix[u] += di[u];
    maxWaterWithoutFix[u] += di[u];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            cin >> di[i];
        }

        for (int i = 1; i < n; i++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        dfs(1, 0); // Start DFS from the root

        int answer = max(maxWaterWithFix[1], maxWaterWithoutFix[1]); // Choose the better option
        cout << answer << endl;
    }

    return 0;
}
