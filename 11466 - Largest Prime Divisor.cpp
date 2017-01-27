#include <cstdio>
#include <cmath>
using namespace std;
#define LIMIT 10000200
bool pri[LIMIT];
int prime[666555];
void seive(){
    int i, J, root = (int)sqrt(LIMIT)+1;
    for(pri[1]=1, i=3; i<root; i+=2)if(!pri[i]){
        for(J=i*i; J<LIMIT; J+=i<<1)
            pri[J]=1;
    }
    for(prime[0]=2, i=3, J=1; i<LIMIT; i+=2)if(!pri[i])
        prime[J++]=i;
}
inline bool Big_prime(long long num){
    long long root=((int)sqrt(num))+1;
    for(int i=0; prime[i]<root; i++){
        if(num%prime[i]==0) return false;
    }
    return true;
}
long long Divisor(long long N){
    if(N&1 && N<10000200){
        if(pri[N]==0) return -1;
    }
    long long num, Max=-1, root=((int)sqrt(N))+1;
    for(int i=2; i<root; i++){
        if(N%i==0){
            num = N/i;
            if(num==i) return -1;
            if(i&1 && pri[i]==0) Max=i;
            if(num&1){
                if(num<10000200){
                    if(pri[num]==0) return num;
                }

                else if(Big_prime(num)==true) return num;
            }
        }
    }
    return Max;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    seive();
    long long N;
    while(scanf("%lld", &N)==1 && N){
        if(N<1) N*=-1;
        if(N==1){puts("-1"); continue;}
        N = Divisor(N);
        printf("%lld\n", N);
    }
    return 0;
}
