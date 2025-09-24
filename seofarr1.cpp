#include <iostream>
#include <climits>

using namespace std;


int main(){

int lol[]={10,15,18,19,20};
int size=sizeof(lol)/sizeof(lol[0]);

int smallest = INT_MAX;

for (int i=0;i<size;i++){
    smallest=min(lol[i],smallest);
}
cout<<"Smallest: "<<smallest<<endl;
return 0;
}
