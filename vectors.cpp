#include <iostream>
#include <vector>
using namespace std;

int main(){


cout<<"Declaration of the vector"<<endl;
vector<int> vec;
//cout<<vec[0];

cout<<endl;

cout<<"Intializing the values for an vector array"<<endl;
vector<int> vec1={1,2,3,4,5};
cout<<vec1[0];
cout<<vec1[1];
cout<<vec1[2];
cout<<vec1[3];
cout<<vec1[4];

cout<<endl;

cout<<"Intializing a single value to multiple indexes"<<endl;
vector<int> vec2(5,8);
cout<<vec2[0];
cout<<vec2[1];
cout<<vec2[2];
cout<<vec2[3];
cout<<vec2[4];

cout<<endl;


return 0;
}
