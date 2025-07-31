#include<iostream>
using namespace std;

int main(){
    int n,c=1,sum=0;
     cout<<"Calculating the sum of N numbers"<<endl;
     cout<<"Enter the value of N: ";
     cin>>n;
     while (c<=n){
        sum+=c;
        c+=1;
     }
     cout<<"Total sum of N numbers is: "<<sum<<endl;
     return 0;
}