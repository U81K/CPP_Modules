#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int choice = 1;

    switch (choice) {
        case 1:
            std::cout << "Choice is 1" << std::endl;
        case 2:
            std::cout << "Choice is 2" << std::endl;
        case 5:
            std::cout << "Choice is 3" << std::endl;
        // default:
        //     std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}