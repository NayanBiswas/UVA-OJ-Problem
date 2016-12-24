#include <iostream>
#include <cmath>
#include <cstdio>
#define N 66000
using namespace std;
int prime[7777];
bool pri[32877];
void seive();
int main()
{
    //freopen("Input.txt","r", stdin);
    seive();
    int n, hi, i, ans;
    while(scanf("%d", &n)==1 && n!=0){
        if(n==4){
            printf("1\n");
            continue;
        }
        if(n&1){
            i=n-2;
            if(pri[i>>1]==0)
                printf("1\n");
            else
                printf("0\n");
            continue;
        }
        else{
            ans=0;
            for(i=0; prime[i]<=n/2; i++) {
                hi = n-prime[i];
                if(prime[i]+hi==n && hi%2==1 && pri[hi>>1]==0){
                    ans++;
                }
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
void seive()
{
    int root = sqrt(N)+1, i, j;
    for(i=3; i<=root; i+=2){
        if(pri[i>>1]==0){
            for(j=i*i; j<=N; j+=(i<<1))
                pri[j>>1]=1;
        }
    }
    prime[0]=2;
    for(i=3,j=1; i<N; i+=2){
        if(pri[i>>1]==0){
            prime[j++]=i;
        }
    }
}
