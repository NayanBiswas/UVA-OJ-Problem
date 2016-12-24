#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    long long int res;
    double a,b,c;
    int test, num, x, i;
    cin>>test;
    while(test--){
        cin>>num;
        i=0;
        res = ((((((num*567)/9)+7492)*235)/47)-498);
        while(i!=2){
            x = res%10;
            res = res/10;
            i++;
        }
        x=fabs(x);
        cout<<x<<endl;
    }
    return 0;
}
