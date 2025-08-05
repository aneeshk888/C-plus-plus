#include <iostream>
using namespace std;

int main() {
    int n;

    // 🔢 Input: number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // 🧩 Pattern logic
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;  // Set character based on row index

        for (int j = 0; j <= i; j++) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
