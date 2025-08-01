#include <iostream>
using namespace std;

bool isPrime() {
    int n;
    cout << "**** Prime Number Check ****" << endl;
    cout << "Enter the value: ";
    cin >> n;

    if (n <= 1) return false; // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) { // check till sqrt(n)
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    if (isPrime())
        cout << "It is a prime number." << endl;
    else
        cout << "It is not a prime number." << endl;

    return 0;
}
