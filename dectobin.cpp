#include  <iostream>
using  namespace std;

int dectobin(int dec){
int ans=0,pow=1;
while (dec >0){
int rem=dec%2;
dec=dec/2;
ans+=(rem*pow);
pow=pow*10;
}
cout<<"Ans: "<<ans<<endl;
return 0;
}


int main(){
//int dec=10;
//dectobin(dec);
cout<<"Decimal to Binary number conversion from 1 to 10: "<<endl;
for (int i=0;i<=10;i++){
    dectobin(i);
}

return 0;
}
