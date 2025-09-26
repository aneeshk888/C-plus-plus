#include <iostream>
#include <unordered_set>
using namespace std;

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    unordered_set<int> set1;
    unordered_set<int> intersection;

    // Store elements of arr1 in set1
    for (int i = 0; i < size1; ++i) {
        set1.insert(arr1[i]);
    }

    // Check for common elements in arr2
    for (int i = 0; i < size2; ++i) {
        if (set1.find(arr2[i]) != set1.end()) {
            intersection.insert(arr2[i]);
        }
    }

    // Print intersection
    cout << "Intersection of the arrays: ";
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printIntersection(arr1, size1, arr2, size2);

    return 0;
}