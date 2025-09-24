#include <iostream>
using namespace std;

void sp(int arr[],int sz){
int sum=0,product=1;
//int sz=sizeof(arr[])/sizeof(arr[0]);
for (int i=0;i<sz;i++){
sum+=arr[i];
product*=arr[i];
}
cout<<"Sum of array is: "<<sum<<endl;
cout<<"Product of the array is: "<<product<<endl;
}



int main(){

int arr[]={1,2,3,4,5,6,7};
int sz=7;
sp(arr,sz);
return 0;
}
