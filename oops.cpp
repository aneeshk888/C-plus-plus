#include <iostream>
using namespace std;

class Animal {
public:
    string species;
    int age;
    int name;
    
    // Member functions
    void eat() {
        cout<<"I am eating"<<endl;
    }
    void sleep() {
        cout<<"I am sleeping"<<endl;
    }
    void makeSound () {
        cout<<"I am making sound"<<endl;
    }
};

int main(){
Animal a;
a.eat();
a.sleep();
a.makeSound();

return 0;
}


