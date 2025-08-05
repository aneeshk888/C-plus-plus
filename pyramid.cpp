#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter a value: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print leading spaces using setw
        cout << setw(n - i + 1);  // Adjust spacing

        // Increasing numbers
        for (int j = 1; j <= i + 1; j++) {
            cout << j;
        }

        // Decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
