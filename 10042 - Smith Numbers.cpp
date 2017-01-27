#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define N 32622
bool pri[N+5];
int prime[4000];
void seive(){
    int i, J, root=((int)sqrt(N))+1;
    for(pri[1]=1, i=3; i<root; i+=2)if(!pri[i]){
        for(J=i*i; J<N; J+=i+i)pri[J]=1;
    }
    for(prime[0]=2, i=3, J=1; i<N; i+=2)if(!pri[i]){
        prime[J++]=i;
    }
}
inline int num_sum(int num){
    int sum=0;
    while(num>0){
        sum+=(num%10);
        num/=10;
    }
    return sum;
}
inline int prime_sum_fact(int num){
    int i, sum, temp, X=num, root=((int)sqrt(num))+1;
    for(i=0, sum=0; prime[i]<root && prime[i]<=num; i++){
        if(num%prime[i]==0){
            if(prime[i]<10) temp = prime[i];
            else temp=num_sum(prime[i]);
            while(num%prime[i]==0){
                num/=prime[i];
                sum+=temp;
            }
        }
    }
    if(X==num) return 0;
    X = 0;
    if(num>1) X=(num_sum(num));
    return sum+X;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    seive();
    int test, temp, temp1, num;
    cin>>test;
    while(test--){
        scanf("%lld", &num);
        while(1){
            num++;
            if(num&1 && num<31622){
                if(!pri[num]){
                    continue;
                }
            }
            temp = num_sum(num);
            temp1 = prime_sum_fact(num);
            if(temp==temp1){
                printf("%d\n", num);
                break;
            }
        }
    }
    return 0;
}

