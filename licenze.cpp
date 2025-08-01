#include<iostream>
using namespace std;

int main(){
    string name,city;
    int age;
    cout<<"Checking your eligibility for your licenze app"<<endl;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your city: ";
    cin>>city;

    if (age<18){
        cout<<"Your not eligible for the driving licenze yet kiddo"<<name<<endl;
    }
    else {
        cout << "You're eligible for the driving license " << name << " from " << city << "." << endl;
    }
} 