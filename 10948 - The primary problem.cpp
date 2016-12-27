#include <cmath>
#include <cstdio>
#include <cstdio>
#include <iostream>
using namespace std;
#define N 1000010
bool prime[N+10];
void seive()
{
    int root=sqrt(N)+1, i, j;
    for(i=3; i<=root; i+=2)if(!prime[i]){
        for(j=i*i; j<=N; j+=i<<1) prime[j]=1;
    }
}
int main()
{
    //freopen("Input.txt","r", stdin);
    seive();
    int n, x, y, i;
    bool ck;
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;
        printf("%d:\n", n);
        if(n==11){
            printf("NO WAY!\n");
            continue;
        }
        else if(n&1){
            x=n-2;
            if(x&1 && prime[x]==0)
                printf("2+%d\n", x);
            else printf("NO WAY!\n");
            continue;
        }
        else if(n==4){
            printf("2+2\n");
            continue;
        }
        else{
            x=n>>1;
            ck=false;
            for(i=3; i<=x; i+=2){
                if(prime[i]==0 && (n-i)&1 && prime[n-i]==0){
                    printf("%d+%d\n", i, n-i);
                    ck=true;
                    break;
                }
            }
            if(ck==false) printf("NO WAY!\n");
        }
    }
    return 0;
}
