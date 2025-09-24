#include <iostream>
#include <climits>

using namespace std;

int main() {
    int num[] = {1, -1, 93, 10, -24, 7};
    int size = sizeof(num) / sizeof(num[0]);
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (num[i] < smallest) {
            smallest = num[i];
        }
    }

    cout << "Smallest of array values is: " << smallest << endl;
    return 0;
}
