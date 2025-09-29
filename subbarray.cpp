#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(int st=0;st<sz;st++){
        for(int end=st;end<sz;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
