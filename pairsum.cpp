#include <iostream>
#include <vector>
using namespace std;

void Pairsum(vector<int> & nums,int sz,int target){
for(int i=0;i<sz;i++){
    for(int j=i+1;j<sz;j++){
        if(nums[i]+nums[j]==target){
            nums.push_back[i];
            nums.push_back[j];
            return ans;
        }
    }
    return ans;
    cout<<nums[0]<<nums[1]<<endl;
}

}



int main() {
    vector<int> arr={1,2,3,4,5};
    int sz=arr.size();
    int target=7;
    Pairsum(arr,sz,target);
    return 0;
}
