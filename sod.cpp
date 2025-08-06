#include <iostream>
using namespace std;

int sumofdigits(){
int num,ldigit;
cout<<"Enter a number: ";
cin>>num;
int sum=0;
while (num>0){
ldigit=num%10;
num=num/10;
sum+=ldigit;

}
cout<< "Sum of digits: "<<sum<<endl;
return 0;
}



int main(){

sumofdigits();
return 0;

}
