#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int Dec,temp,test;
    cin>>test;
    while(test--){
        cin>>Dec;
        int Dc=0,Hc=0,i=0,Hex=0;
        temp = Dec;
        while(temp){
            Hex+=(temp%10)*pow(16,i++);
            temp/=10;
        }
        while(Hex>0){
            if(Dec>0){
                if(Dec&1) Dc++;
                Dec/=2;
            }
            if(Hex&1) Hc++;
            Hex/=2;
        }
        cout<<Dc<<' '<<Hc<<endl;
    }
    return 0;
}
