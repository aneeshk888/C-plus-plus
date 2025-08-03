#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Logic 1: Individual checks
    cout << "\nChecking divisibility by each number from 2 to 10:\n";
    for (int i = 2; i <= 10; ++i) {
        if (num % i == 0) {
            cout << num << " is divisible by " << i << endl;
        } else {
            cout << num << " is NOT divisible by " << i << endl;
        }
    }

    // Logic 2: All-at-once check
    bool divisibleByAll = true;
    for (int i = 2; i <= 10; ++i) {
        if (num % i != 0) {
            divisibleByAll = false;
            break;
        }
    }

    cout << "\nFinal verdict:\n";
    if (divisibleByAll) {
        cout << num << " is divisible by ALL numbers from 2 to 10." << endl;
    } else {
        cout << num << " is NOT divisible by ALL numbers from 2 to 10." << endl;
    }

    return 0;
}
