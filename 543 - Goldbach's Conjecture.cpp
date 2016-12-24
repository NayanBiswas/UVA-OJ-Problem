#include <iostream>
#include <cstdio>
#include <math.h>
#define N 10000000
using namespace std;
bool isprime[N];
int prime[999999];
void seive();
int main()
{
    seive();
    int n, i, j, k, lo, hi, temp, m, start, end, index, key, mid;
    while(scanf("%d",&n)!=EOF) {
        if(n==0) break;
        lo=0, hi=0, m=n;
        temp = n+5;
        if(m%2==0) m--;
        for(j=m; j>=0; j-=2)
            if(isprime[j]==0) break;
        start=0, index=0;
        if(j>100000) end=j/7;
        else if(j>10000) end = j/4;
        else end = j/2;
        key = j;
        while(start<=end){
            mid = (start+end)/2;
            if(prime[mid] == key){
                index = mid;
                break;
            }
            else if(prime[mid]<key) start = mid+1;
            else if(prime[mid]>key) end = mid-1;
        }
        bool b = 0;
        for(i=0; i<=index; i++){
            for(j=index; j>=index/2; j--){
                temp = prime[i] + prime[j];
                if(temp == n){
                    b==1;
                    break;
                }
                else if(temp<n) break;
            }
            if(b==1 || temp == n){
                lo=prime[i];
                hi=prime[j];
                break;
            }
        }
        cout<<n<<" = "<<lo<<" + "<<hi<<endl;

    }
    return 0;
}
void seive(){
    int root, i, j;
    root = (sqrt(N)+1);
    for(i=3; i<=root; i+=2){
        if(isprime[i]==0){
            for(j=i*i; j<=N; j+=i+i)
                isprime[j] = 1;
        }
    }
    prime[0] = 2;
    for(i=3, j=1; i<=N; i+=2){
        if(isprime[i]==0)
            prime[j++]=i;
    }
    return;
}
