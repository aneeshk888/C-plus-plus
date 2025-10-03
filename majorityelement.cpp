#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr={1,1,1,1,2,2,3,3,3,3,3,3,3,3};
    int n=arr.size();
   //for each loop
   for (int vals:arr){
   int freq=0;
	for(int el:arr){
		if(el==vals){
			freq++;
}
}
if(freq>n/2){
cout << vals << endl;
return 0;
}
}
}
