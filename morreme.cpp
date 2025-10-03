#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,1,1,1,1,1,1,1,1,2,2};
    int n = arr.size();

    // Phase 1: Find candidate
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (freq == 0) {
            ans = arr[i];
            freq = 1;
        } else if (arr[i] == ans) {
            freq++;
        } else {
            freq--;
        }
    }

    // Phase 2: Verify candidate
    int count = 0;
    for (int val : arr) {
        if (val == ans) count++;
    }

    if (count > n / 2) {
        cout << "Majority element: " << ans << endl;
    } else {
        cout << "No majority element" << endl;
    }

    return 0;
}
