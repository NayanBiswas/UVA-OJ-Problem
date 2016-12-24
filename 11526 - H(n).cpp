#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
long long H(long long n){
    long long res = 0, i, root;
    if(n<=0) return 0;
    root = sqrt(n);
    for(i=1; i<=root; i++)
        res += n/i;
    res = res*2 - root*root;
    return res;
}
int main()
{
    long long ans, test, t, n;
    while(scanf("%lld",&test)!=EOF){
        for(t=1; t<=test; t++){
            scanf("%lld",&n);
            ans = H(n);
            printf("%lld\n",ans);
        }
    }
    return 0;
}
