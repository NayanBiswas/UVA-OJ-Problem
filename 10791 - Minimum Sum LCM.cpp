#include <iostream>
#include <cmath>
#include <cstdio>
#define SIZ 46666
#define MAX 2147483648
#define p(x) cout<<x<<endl;
using namespace std;
bool pri[SIZ+5];
int prime[5000];
void seive()
{
    int i, J, root=sqrt(SIZ);
    for(i=3, pri[1]=1; i<=root; i+=2)if(!pri[i]){
        for(J=i*i; J<=SIZ; J+=i<<1)pri[J]=1;
    }prime[0]=2;
    for(i=3, J=1; i<SIZ; i+=2)if(!pri[i])
        prime[J++]=i;
}
long long finde(long long n);
int main()
{
    freopen("Input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    seive();
    long long num;
    int test=1;
    while(scanf("%lld", &num)==1 && num){
        if(num==1) num=2;
        else if(num==2) num=3;
        else num = finde(num);
        printf("Case %d: %lld\n", test, num);
        test++;
    }
    return 0;
}
long long finde(long long n)
{
    if(n<SIZ && n&1 && pri[n]==0)return n+1;
    int i, root=sqrt(n)+1, many=0;
    long long num=n, mult=1, ans=0;
    for(i=0; (prime[i]<=root) && (prime[i]<=num); i++){
        if(num%prime[i]==0){
            mult=1;
            while(num%prime[i]==0){
                num/=prime[i];
                mult*=prime[i];
            }
            ans+=mult;
            many++;
        }
    }
    if(num!=1){
        ans+=num;
        many++;
    }
    if(many==1) ans++;
    return ans;
}
