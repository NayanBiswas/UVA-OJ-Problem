#include <iostream>
#include <math.h>
#include <cstdio>
#define N 100000
using namespace std;
int pri[N], prime[50000];
int seive();
int main()
{
    //freopen("input.txt","r",stdin);
    int num, totalprime, i;
    bool ck;
    totalprime = seive();
    while(scanf("%d",&num) && num!=0){
        printf("%d =",num);
        ck=false;
        if(num<0){
            num*=-1;
            printf(" -1");
            ck=true;
        }
        if(num==1){
            printf(" 1\n");
            continue;
        }
        for(i=0; prime[i]*prime[i]<=num && i<totalprime; i++){
            while(num%prime[i] == 0){
                if (ck)
                    printf(" x %d", prime[i]);
                else
                    printf(" %d", prime[i]);
                ck = true;
                num /= prime[i];
            }
        }
        if (num > 1){
            if (ck) printf(" x %d", num);
            else printf(" %d", num);
        }
        printf("\n");
    }
    return 0;
}
int seive()
{
    int root=sqrt(N)+1, i, j;
    for(i=3; i<=root; i+=2)if(pri[i]==0){
        for(j=i*i; j<=N; j+=i<<2) pri[j]=1;
    }
    prime[0]=2;
    for(i=3,j=1; i<=N; i+=2)if(pri[i]==0){
        prime[j++]=i;
    }
    return j-1;
}
