#include <iostream>
using namespace std;


int main(){
    double n;
    cout<<"Grading system"<<endl;\
    cout<<"Enter your marks: ";
    cin>>n;
    if (n>=90){
        cout<<"O grade"<<endl;
    }
    else if (n>=80 || n>=70){
        cout<<"A grade"<<endl;
    }
    else if (n>=60){
        cout<<"B grade"<<endl;
    }
    else {
        cout<<"D grade"<<endl;
    }
    return 0;
}
