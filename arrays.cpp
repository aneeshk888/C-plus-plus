#include <iostream>
using namespace std;

int main() {
    // String Array
    cout << "String Array:" << endl;
    string names[] = {"Aneesh", "Alien", "Hacker", "Lolzz", "Kutty"};
    int size = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < size; i++) {
        cout << names[i] << endl;
    }

    // Integer Array
    cout << "\nInteger Array:" << endl;
    int num[] = {1, 2, 3, 4, 5};
    int hehe = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < hehe; i++) {
        cout << num[i] << endl;
    }

    // Double Array
    cout << "\nDouble Array:" << endl;
    double prices[] = {99.99, 149.50, 200.75, 89.25};
    int dsize = sizeof(prices) / sizeof(prices[0]);
    for (int i = 0; i < dsize; i++) {
        cout << prices[i] << endl;
    }

    // Char Array
    cout << "\nChar Array:" << endl;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    int csize = sizeof(grades) / sizeof(grades[0]);
    for (int i = 0; i < csize; i++) {
        cout << grades[i] << endl;
    }

    return 0;
}
