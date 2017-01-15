#include <iostream>
#include <cstdio>
#define SIZ 31700
using namespace std;
bool pri[SIZ+5];
int prime[3508];
int My_sqrt(int x)
{
    if(x==1 || x==2) return 1;
    int y;
    for(y=x>>1; y>(x/y); y=((x/y)+y)>>1);
    return y;
}
// seive for store prime;
void seive()
{
    int i, J, root=My_sqrt(SIZ);
    for(i=3, pri[1]=1; i<=root; i+=2)if(!pri[i]){
        for(J=i*i; J<=SIZ; J+=i<<1)pri[J]=1;
    }
    prime[0]=2;
    for(i=3, J=1; i<=SIZ; i+=2)if(!pri[i]){
        prime[J++]=i;
    }
}
int MY_ans(int num)
{
    int i, primes = num, r=1, m=1, root=My_sqrt(num);
    for(i=0; prime[i]<=root; i++){
        if(primes%prime[i]==0){
            r*=prime[i]-1;
            m*=prime[i];
        }
        while(primes%prime[i]==0)
            primes/=prime[i];
    }
    // if num is a prime number return num-1;
    // because all prime number don't have >1 gcd pair;
    if(primes==num)
        return num-1;
    if(primes>1){
        r*=primes-1;
        m*=primes;
    }
    return (num/m)*r;
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    seive();
    int num;
    while(scanf("%d", &num)==1 && num){
        if(num==1){
            printf("1\n");
            continue;
        }
        printf("%d\n", MY_ans(num));
    }
    return 0;
}
