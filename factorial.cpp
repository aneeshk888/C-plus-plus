#include<iostream>
using namespace std;

int main() {
    int f = 1, n;
    cout << "Calculating the factorial of N numbers" << endl;
    cout << "Enter the value of N: ";
    cin >> n;

    int original_n = n;  // Save the original value

    while (n > 1) {
        f *= n;
        n--;
    }

    cout << "The factorial of value " << original_n << " is: " << f << endl;
    return 0;
}
