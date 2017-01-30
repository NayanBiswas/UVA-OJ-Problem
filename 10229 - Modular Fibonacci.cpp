#include <iostream>
#include <cstdio>
#define ull unsigned long long
using namespace std;
ull fib(ull n, ull mod) {
    ull i, J, k, h, t;
    i = h = 1;
    J = k = 0;
    while(n>0){
        if(n&1){
            t = J*h;
            J = i*h + J*k +t;
            i= i*k + t;
            J = J%mod;
        }
        t = h*h;
        h = 2*k*h + t;
        k = k*k +t;
        n = n>>1;
    }
    return J%=mod;
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    ull n, m, ans;
    while(scanf("%lld%lld", &n, &m)!=EOF){
        ans = fib(n, 1<<m);
        printf("%lld\n", ans);
    }
    return 0;
}
