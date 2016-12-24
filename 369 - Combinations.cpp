#include<stdio.h>
#include <cstdio>
#include<iostream>
#include <iomanip>
using namespace std;
long double nCr(long double X)
{
    return X==0 ? 1 : X*nCr(X-1);
}
int main()
{
    long double N, M, comb, x;
    while(cin>>N>>M&&N!=0&&M!=0){
        x=N-M;
        comb=nCr(N)/(nCr(x)*nCr(M));
        cout<<N<<" things taken "<<M<<" at a time is "<<fixed<<setprecision(0)<<comb<<" exactly."<<endl;
    }
    return 0;
}
