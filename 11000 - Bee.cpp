#include <iostream>
#include <cstdio>
using namespace std;
long long dp[100];
void fib(long long n)
{
    long long a=0, b=1, c;
    for(int i=1; i<=n; i++){
        c = a+b+1;
        a = b;
        b = c;
        dp[i] = a;
    }
}
int main()
{
    fib(80);
    int n;
    while(scanf("%d", &n)!=EOF && n!=-1){
        printf("%lld %lld\n", dp[n], dp[n+1]);
    }
    return 0;
}
