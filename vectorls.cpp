#include <iostream>
#include <vector>
using namespace std;


void ls(vector<int> vec,int target){

for(int val:vec){
	if(val==target){
	cout<<"Target value found: "<<val<<endl;
	}
	else{
	cout<<"Target value not found: "<<endl;
	}
}
}



int main() {

vector<int> vec={1,2,3,4,5,6,7,10};
int tar=7;
ls(vec,tar);


return 0;
}
