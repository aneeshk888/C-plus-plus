#include <iostream>
#include <cmath>
using namespace std;

int prime(){
    int n;
    cout << "Check if a number is prime" << endl;
    cout << "Enter the value of N: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not a prime number: " << n << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime number: " << n << endl;
    else
        cout << "Non-Prime number: " << n << endl;

    return 0;
}

int main() {


prime();
return 0;

}
    
