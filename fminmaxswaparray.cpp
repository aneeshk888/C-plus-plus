#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size) {
    int minIndex = 0, maxIndex = 0;

    // Step 1: Find indices of min and max
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) minIndex = i;
        if (arr[i] > arr[maxIndex]) maxIndex = i;
    }

    // Step 2: Swap the elements
    swap(arr[minIndex], arr[maxIndex]);

    // Step 3: Print the updated array
    cout << "Array after swapping min and max:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 9, 1, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    swapMinMax(arr, size);

    return 0;
}


//Array after swapping min and max:
//5 3 1 9 6 7