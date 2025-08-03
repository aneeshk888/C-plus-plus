#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Lowercase or Uppercase letter"<<endl;
    cout<<"Enter the character value: ";
    cin>>ch;
    if (ch>='a' && ch<='z'){
        cout<<"Lowercase"<<endl;
    }
    else {
        cout<<"Uppercase"<<endl;
    }
    return 0;
}