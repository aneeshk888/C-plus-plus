#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num = {1,1,1,1,2,2,2,3,3,3,3,3,3,3,3};
    int n = num.size();
    
    int maxFreq = 1, currFreq = 1;
    int majority = num[0];

    for (int i = 1; i < n; i++) {
        if (num[i] == num[i - 1]) {
            currFreq++;
        } else {
            currFreq = 1;
        }

        if (currFreq > maxFreq) {
            maxFreq = currFreq;
            majority = num[i];
        }
    }

    if (maxFreq > n / 2) {
        cout << "Majority element: " << majority << endl;
    } else {
        cout << "No majority element" << endl;
    }

    return 0;
}
