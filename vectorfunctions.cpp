#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Learning vector functions" << endl;

    vector<int> ane = {1, 2, 3, 4, 5};

    cout << "Size: " << ane.size() << endl;

    ane.push_back(10); // No cout here

    cout << "Front: " << ane.front() << endl;
    cout << "Back: " << ane.back() << endl;
    cout << "At: " << ane.at(0) << endl;

    cout << "Values: ";
    for (int i : ane) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Using pop_back()" << endl;
    ane.pop_back(); // No cout here

    cout << "After pop_back: ";
    for (int val : ane) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
