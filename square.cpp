#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Square pattern problem"<<endl;
    cout<<"Enter the N value: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}