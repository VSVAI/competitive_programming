#include<iostream>
#include<math.h>
using namespace std;
int main(){
    unsigned long long t,n,i,l=0;
    cin>>t;
    while(t--){
        cin>>n;
        i=1;
        l=0;
        while(pow(5,i)<=n){
           l+=n/pow(5,i);
           i++;
        }
        cout<<l<<endl;
    }
}
