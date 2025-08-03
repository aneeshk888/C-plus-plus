#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Determining a number whether it is odd or even"<<endl;
    cout<<"Enter a value: ";
    cin>>n;   
    if (n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    return 0;
}