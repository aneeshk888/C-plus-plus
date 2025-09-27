#include <iostream>
#include <vector>
using namespace std;

void ReverseArray(vector<int>& vec) {
    int start = 0, end = vec.size() - 1;

    cout<<"Before reversing an array: "<<endl;
     for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
    cout<<"After reversing an array: "<<endl;
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    ReverseArray(vec);
    return 0;
}