#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;

ll GCD(ll n, ll m)
{
    if(n>m){
        n = n ^ m;
        m = m ^ n;
        n = n ^ m;
    }
    ll temp;
    while(n!=0){
        temp=m%n;
        if(temp==0) break;
        m = n;
        n = temp;
    }
    return n;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    ll n, m, test, gcd;
    long long lcd;
    cin>>test;
    for(int t=1; t<=test; t++){
        cin>>n>>m;
        gcd = GCD(n, m);
        lcd = (n*m)/gcd;
        if(n==gcd && m==lcd ) cout<<gcd<<' '<<lcd<<endl;
        else cout<<"-1"<<endl;
    }

    return 0;
}
