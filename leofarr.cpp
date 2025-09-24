#include <iostream>
#include <climits>
using namespace std;


int main(){

int haha[]={9,10,3,14,-3};
int size=sizeof(haha)/sizeof(haha[0]);

int largest=INT_MIN;
for(int i=0;i<size;i++){
	//if(haha[i]>largest)
   	//largest=haha[i]; first approach
	//second approach
	largest=max(haha[i],largest);
}
cout<<"Largest value: "<<largest<<endl;
return 0;
}
