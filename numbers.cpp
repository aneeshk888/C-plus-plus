#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Determine a number whether its postive or negative"<<endl;
    cout<<"Enter a value: ";
    cin>>n;
    if(n>=0){
        cout<<"Postive"<<" "<<n<<endl;
    }
    else{
        cout<<"Negative"<<" "<<n<<endl;
    }
    return 0;
}