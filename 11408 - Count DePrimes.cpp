#include <bits/stdc++.h>
#define N 5000050
using namespace std;
bool pri[N+5], ck[N+9];
int prime[N];
int store[N+9];
void seive(){
    int i, J, root = (int)sqrt(N);
    for(pri[1]=1, i=3; i<=root; i+=2)if(!pri[i]){
        for(J=i*i; J<N; J+=i<<1)pri[J]=1;
    }prime[0]=2;
    for(i=3, J=1; i<N; i+=2)if(!pri[i])prime[J++]=i;
}
inline bool sum_prime_fact(int num){
    int root = (int)sqrt(num)+1, ck=num, sum=0;
    if(num&1 && pri[num]==0) return true;
    for(int i=0; prime[i]<root && prime[i]<=num; i++){
        if(num%prime[i]==0){
            while(num%prime[i]==0){
                num/=prime[i];
            }
            sum+=prime[i];
        }
    }if(num>1) sum+=num;
    if(sum==2) return true;
    if(!(sum&1)) return false;
    return !pri[sum];
}
void DePrime(){
    long long i, J, num, k;
    for(i=0; prime[i]<2322; i++){
        J = prime[i], num = J;
        while(num<N){
            ck[num]=1;
            num*=J;
        }
        for(J=i+1; prime[J]<2322; J++){
            num = prime[i]+prime[J];
            if(num&1 && pri[num]==0){
                num = prime[i]*prime[J];
                k = num;
                while(num<N){
                    ck[num]=1;
                    num*=k;
                }
            }
        }
    }
    for(i=2, num=0; i<N; i++){
        if(ck[i]==1) num++;
        else if(sum_prime_fact(i)==true) num++;
        store[i]=num;
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    seive();
    DePrime();
    int a, b;
    cout<<store[5000000]<<endl;
    while(scanf("%d", &a)!=EOF && a){
        scanf("%d", &b);
        printf("%d\n", (store[b]-store[a-1]));
    }
    cout<<endl<<"Time is "<<clock()<<endl;
    return 0;
}
/// 846027

/*#include <bits/stdc++.h>
#define N 5000000
using namespace std;
bool pri[N+5];
int prime[N];
int store[5000555];
void seive(){
    int i, J, root = (int)sqrt(N);
    for(pri[1]=1, i=3; i<=root; i+=2)if(!pri[i])
        for(J=i*i; J<N; J+=i<<1)pri[J]=1;
    for(i=3, J=1, prime[0]=2; i<N; i+=2)if(!pri[i])prime[J++]=i;
}
bool sum_prime_fact(int num){
    int root = (int)sqrt(num), ck=num, sum=0;
    if(num&1 && pri[num]==0) return true;
    for(int i=0; prime[i]<=root && prime[i]<=num; i++){
        if(num%prime[i]==0){
            while(num%prime[i]==0){
                num/=prime[i];
            }
            sum+=prime[i];
        }
    }
    if(num>1) sum+=num;
    if(sum==2) return true;
    if(!(sum&1)) return false;
    return !pri[sum];
}
int DePrime(int i, int End){
    int ans=0;
    bool ck;
    for(; i<=End; i++){
        ck = sum_prime_fact(i);
        if(ck==true){
            ans++;
        }
        store[i]=ans;
    }
    return ans;
}
int main(){
    freopen("input.txt", "r", stdin);
    seive();
    DePrime(2, 5000000);
    //printf("%d\n", store[5000000]);
    int a, b;
    while(scanf("%d", &a)!=EOF && a){
        scanf("%d", &b);
        printf("%d\n", (store[b]-store[a-1]));
    }
    return 0;
}*/
