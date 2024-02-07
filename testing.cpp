#include <iostream>
#include <vector>

// Function to merge sorted pairs
void mergePairs(std::vector<int>& elements, size_t start, size_t middle, size_t end) {
    std::vector<int> merged;
    size_t i = start;
    size_t j = middle + 1;

    // Merge the two sorted halves
    while (i <= middle && j <= end) {
        if (elements[i] <= elements[j]) {
            merged.push_back(elements[i]);
            ++i;
        } else {
            merged.push_back(elements[j]);
            ++j;
        }
    }

    // Copy the remaining elements from the first half
    while (i <= middle) {
        merged.push_back(elements[i]);
        ++i;
    }

    // Copy the remaining elements from the second half
    while (j <= end) {
        merged.push_back(elements[j]);
        ++j;
    }

    // Copy the merged elements back to the original vector
    for (size_t k = 0; k < merged.size(); ++k) {
        elements[start + k] = merged[k];
    }
}

// Function for recursive sorting of pairs
void recursiveSortPairs(std::vector<int>& elements, size_t start, size_t end) {
    // Base case: If the range has less than two elements, return
    if (end - start < 1) {
        return;
    }

    // Calculate the middle index
    size_t middle = start + (end - start) / 2;

    // Recursively sort pairs in the higher half
    recursiveSortPairs(elements, start, middle);

    // Recursively sort pairs in the lower half
    recursiveSortPairs(elements, middle + 1, end);

    // Merge the sorted pairs
    mergePairs(elements, start, middle, end);
}

// Function for inserting elements in reverse order
void insertReverse(std::vector<int>& elements, size_t start, size_t end) {
    // Iterate over the range in reverse order
    for (size_t i = end; i > start; --i) {
        int current = elements[i];
        size_t j = i - 1;

        // Insert the current element into the sorted sequence
        while (j >= start && elements[j] > current) {
            elements[j + 1] = elements[j];
            --j;
        }

        elements[j + 1] = current;
    }
}

// Function for Ford-Johnson algorithm
void fordJohnson(std::vector<int>& elements, size_t start, size_t end) {
    // Base case: If the range has less than two elements, return
    if (end - start < 1) {
        return;
    }

    // Calculate the middle index
    size_t middle = start + (end - start) / 2;

    // Recursively sort pairs in the higher half
    recursiveSortPairs(elements, start, middle);

    // Recursively sort pairs in the lower half
    recursiveSortPairs(elements, middle + 1, end);

    // Insert elements in reverse order
    insertReverse(elements, start, end);
}

// Function to print elements
void printElements(const std::vector<int>& elements) {
    for (int i = 0; i < elements.size(); i++) {
        std::cout << elements[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> elements;
	elements.push_back(4);
	elements.push_back(2);
	elements.push_back(7);
	elements.push_back(1);
	elements.push_back(9);
	elements.push_back(5);
	elements.push_back(3);
	elements.push_back(8);

    std::cout << "Original elements: ";
    printElements(elements);

    fordJohnson(elements, 0, elements.size() - 1);

    std::cout << "Sorted elements using Ford-Johnson: ";
    printElements(elements);

    return 0;
}
