#include <iostream>
using namespace std;
int main(){
int a,b,c;


while(true){
cin>>a>>b>>c;

if(a==0&&b==0&&c==0)
break;

if(2*b==(a+c))
cout<<"AP "<<c+(c-b)<<endl;

else if(b*b == a*c)
cout<<"GP "<<c*(c/b)<<endl;

}


}



