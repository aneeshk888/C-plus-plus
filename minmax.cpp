#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 10, 3, 14, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Minimum value: " << arr[minIndex] << " at index " << minIndex << endl;
    cout << "Maximum value: " << arr[maxIndex] << " at index " << maxIndex << endl;

    return 0;
}
