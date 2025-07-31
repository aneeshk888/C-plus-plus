#include<iostream>
using namespace std;

int main(){
    int p,t,r,si;
    cout<<"Enter the principal value: ";
    cin>>p;
    cout<<"Enter the time value: ";
    cin>>t;
    cout<<"Enter the rate value: ";
    cin>>r;
    if (p==0 || t==0 || r==0){
         exit(1);
    }
    else{
        si= p*t*r/100;
        cout<<"The simple Interest value is: "<<si<<endl;
    }
    return 0;
}
