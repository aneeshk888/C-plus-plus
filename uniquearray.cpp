#include<iostream>
#include<unordered_map>

using namespace std;

void  Unique(int arr[],int sz){
unordered_map<int,int>freq;

for(int i=0;i<sz;i++){
   freq[arr[i]]++;
}

cout<<"Unique elements in the array: ";
for(int i=0;i<sz;i++){
if(freq[arr[i]]==1){
 cout<< arr[i] <<" ";
}
}
cout<<endl;
}

int  main(){

int arr[]={4,5,6,7,4,5};
int sz=sizeof(arr)/sizeof(arr[0]);

Unique(arr,sz);


return 0;
}
