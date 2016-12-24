#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long n, k, ans, res;
    while(scanf("%lld%lld",&n, &k)!=EOF){
        ans = n+(n-1)/(k-1);
        printf("%lld\n",ans);
    }
    return 0;
}
