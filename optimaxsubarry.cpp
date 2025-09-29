#include <iostream>
#include<climits>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int maxsum=INT_MIN,currentsum=0;
    for(int i=0;i<sz;i++){
        currentsum+=arr[i];
        maxsum=max(currentsum,maxsum);
        if(currentsum<0){
            currentsum=0;
        }
    }
    cout << "Maximum subarray sum: " << maxsum << endl;
    return 0;
}
