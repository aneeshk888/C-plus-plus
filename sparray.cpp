#include <iostream>
using namespace std;

int main(){

int arr[]={1,2,3,4,5,6,7};
int size=sizeof(arr)/sizeof(arr[0]);
int sum=0,product=1;

for (int i=0;i<size;i++){
    sum+=arr[i];
   product*=arr[i];
}
cout<<"Sum of the array is: "<<sum<<endl;
cout<<"Product of the array is: "<<product<<endl;
return 0;
}
