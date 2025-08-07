#include <iostream>
#include <bitset>  // For binary representation
using namespace std;

int main() {
    int a = 10, b = 8;

    cout << "a = " << a << " (" << bitset<8>(a) << ")" << endl;
    cout << "b = " << b << " (" << bitset<8>(b) << ")" << endl << endl;

    cout << "Bitwise AND (a & b): " << (a & b) << " (" << bitset<8>(a & b) << ")" << endl;
    cout << "Bitwise OR  (a | b): " << (a | b) << " (" << bitset<8>(a | b) << ")" << endl;
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << " (" << bitset<8>(a ^ b) << ")" << endl;
    cout << "Bitwise NOT (~a): " << (~a) << " (" << bitset<8>(~a) << ")" << endl << endl;

    cout << "Left Shift (a << 1): " << (a << 1) << " (" << bitset<8>(a << 1) << ")" << endl;
    cout << "Right Shift (a >> 1): " << (a >> 1) << " (" << bitset<8>(a >> 1) << ")" << endl;

    return 0;
}
