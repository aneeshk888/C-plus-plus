#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findPairSum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end()); // Required for two-pointer approach

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "(" << arr[left] << ", " << arr[right] << ")\n";
            left++; right--; // Move both to avoid duplicates
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
}

int main() {
    vector<int> arr = {2, 7, 11, 15, -2, 9, 1};
    int target = 9;

    cout << "Pairs with sum " << target << ":\n";
    findPairSum(arr, target);

    return 0;
}
