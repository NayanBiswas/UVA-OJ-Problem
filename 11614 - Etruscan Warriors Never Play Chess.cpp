#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    long long int test, n, i;
    double x, y;
    cin>>test;
    while(test--){
        cin>>n;
        i=((sqrt(1+8*n)-1)/2);
        cout<<i<<endl;
    }
    return 0;
}
