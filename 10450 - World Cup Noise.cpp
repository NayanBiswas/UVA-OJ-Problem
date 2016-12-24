#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long store[60], a, b, c;
    a=0,b=1;
    for(int i=0; i<60; i++){
        c=a+b;
        a=b;
        b=c;
        store[i]=c;
    }
    int fib, test;
    cin>>test;
    for(int t=1; t<=test; t++){
        scanf("%d",&fib);
        printf("Scenario #%d:\n%lld\n\n",t,store[fib]);

    }
    return 0;
}
