#include <iostream>
using namespace std;

int main() {
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(num) / sizeof(num[0]);
    int target = 8;

    for (int i = 0; i < size; i++) {
        if (num[i] == target) {
            cout << "Match found at index " << i <<" as element is "<<num[i]<< endl;
        } else {
            cout << "Not a match at index " << i <<" as element is "<<num[i]<< endl;
        }
    }

    return 0;
}
