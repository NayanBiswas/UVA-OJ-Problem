#include <bits/stdc++.h>
#define N 10000
using namespace std;
bool pri[N+2];
int prime[1230], last, n, dp[10000];
void seive();
int call(int num, int pos)
{
    if(num>=n) return 1;
    int ans=0;
    for(int i=pos; i<last; i++){
        //cout<<num<<endl;
        if(num>n) return 0;
        ans+=call(prime[i]+num, pos+1);
    }
    return ans;
}
int main()
{

    seive();
    while(scanf("%d", &n)!=EOF){
        n=call(0, 0);
        cout<<n<<endl;
    }
    return 0;
}
void seive()
{
    int i, j, root=sqrt(N)+1;
    for(i=3; i<=root; i+=2)if(!pri[i]){
        for(j=i*i; j<=N; j+=i<<1)pri[j]=1;
    }
    prime[0]=2;
    for(i=3, j=1; i<N; i+=2)
        if(!pri[i])prime[j++]=i;
    last=j;
}
