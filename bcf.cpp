#include <iostream>
using namespace std;

// Factorial function with parameter
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Binomial coefficient function
int binomialCoefficient(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);
    return fact_n / (fact_r * fact_nmr);
}

int main() {
    int n = 4, r = 2;
    int result = binomialCoefficient(n, r);
    cout << "Binomial Coefficient (" << n << " choose " << r << ") = " << result << endl;
    return 0;
}
