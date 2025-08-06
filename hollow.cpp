#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a value: ";
    cin >> n;

    // Top half including middle line
    for (int i = 0; i < n; i++) {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // First star
        cout << "*";
        // Hollow space between stars
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Second star
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for (int i = n - 2; i >= 0; i--) {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // First star
        cout << "*";
        // Hollow space between stars
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Second star
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
