#include<stdio.h>
long long res(long long n);
long long top(long long a, long long b);
int main()
{
    long long N, i, j, count, Max, l;
    while(scanf("%lld%lld",&i,&j)!=EOF){
        Max = top(i,j);
        printf("%lld %lld %lld\n", i, j, Max);
    }
    return 0;
}
long long res(long long n)
{
    if(n==1)
        return 1;
    return n&1 ? res((3*n)+1)+1 : res(n/2)+1;
}
long long top(long long a, long long b)
{
    if(a>b)
        return top(b,a);
    long long cou=0, i, x;
    for(i=a; i<=b; i++){
        x = res(i);
        if(cou<x)
            cou=x;
    }
    return cou;
}
