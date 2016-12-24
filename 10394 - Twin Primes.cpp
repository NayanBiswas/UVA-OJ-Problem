#include <bits/stdc++.h>
#define N 20000000
using namespace std;
int prime[120000][3];
bool pri[N+5];
void seive()
{
    int root=sqrt(N)+1;
    int i, j;
    for(i=3; i<=root; i+=2){
        if(pri[i]==0){
            for(j=i*i; j<=N; j+=i+i)
                pri[j]=1;
        }
    }
    for(i=3,j=1; i<=N; i+=2){
        if(pri[i]==0 && pri[i+2]==0){
            prime[j][0]=i;
            prime[j++][1]=i+2;
        }
    }
}
int main()
{
    //freopen("input.txt", "r", stdin);
    seive();
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("(%d, %d)\n", prime[n][0],prime[n][1]);
    }
    return 0;
}
