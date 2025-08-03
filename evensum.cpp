#include <iostream>
using namespace std;

int main() {
    int n, count = 1, sum = 0;
    cout << "Sum of even numbers" << endl;
    cout << "Enter a value: ";
    cin >> n;

    while (count <= n) {
        if (count % 2 == 0) {
            sum += count;
        }
        count++;
    }

    cout << "Sum of even numbers up to " << n << " is: " << sum << endl;
    return 0;
}
