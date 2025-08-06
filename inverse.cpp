#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Value: ";
    cin >> n;

    char ch = 'A';
    for (int i = 0; i < n; i++) {
        // Print leading spaces (3 spaces per indent for clarity)
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print characters
        for (int j = 0; j < n - i; j++) {
            cout << ch;
        }
        ch++; // Move to next character
        cout << endl;
    }

    return 0;
}
