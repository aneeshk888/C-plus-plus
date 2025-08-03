#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Prime numbers program" << endl;
    cout << "Enter a value: ";
    cin >> n;

    bool isPrime = true;

    if (n < 2) {
        isPrime = false; // 0 and 1 are not prime
    } else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << "Prime number: " << n << endl;
    } else {
        cout << "Non-prime number: " << n << endl;
    }

    return 0;
}
