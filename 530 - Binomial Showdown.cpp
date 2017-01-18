#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    int n, k, i;
    unsigned long long ans;
    while(scanf("%d%d", &n, &k)!=EOF){
        if(n==0 && k==0) return 0;
        if(k>(n>>1)) k=n-k;
        for(i=0, ans=1; i<k; i++){
            ans=ans*(n-i);
            ans=ans/(i+1);
        }
        printf("%lld\n", ans);
    }
}
