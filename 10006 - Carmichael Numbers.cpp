#include <iostream>
#include <cstdio>
#include <cmath>
#define SIZ 65000
using namespace std;
bool pri[SIZ+5], ck;
int Carmichael[50];
void seive()
{
    int i, J, root=sqrt(SIZ)+1;
    for(i=3; i<=root; i+=2)if(!pri[i]){
        for(J=i*i; J<=SIZ; J+=i<<1)pri[J]=1;
    }
}
int big_mod(long long base, int po, int mod) {
    long long result=1;
    while(po>0){
        if(po&1) result=(result*base)%mod;
        po >>= 1;
        base = (base*base) % mod;
    }
    return result;
}
void store()
{
    int i, J, num, k;
    for(i=505, k=0; i<65000; i+=2){
        if(pri[i]==0) continue;
        ck = true;
        for(J=2; J<i; J++){
            num = big_mod(J, i, i);
            if(num!=J){
                ck=false;
                break;
            }
        }
        if(ck==true)Carmichael[k++]=i;
    }
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    seive();
    store();
    int n, i;
    while(scanf("%d", &n)!=EOF && n){
        ck = false;
        for(i=0; Carmichael[i]<=n; i++){
            if(Carmichael[i]==n){
                printf("The number %d is a Carmichael number.\n", n);
                ck=true;
                break;
            }
        }
        if(ck==false)
            printf("%d is normal.\n", n);
    }
    return 0;
}
