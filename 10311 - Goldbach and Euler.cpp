#include <iostream>
#include <cmath>
#include <cstdio>
#define N 100000100
using namespace std;
int prime[10000000];
bool pri[50000020];
void seive();
int Search(int num);
int main()
{
    //freopen("Input.txt","r", stdin);
    seive();
    int n, lo, hi, i;
    while(scanf("%d", &n)==1){
        if(n<=4 || n==6){
            printf("%d is not the sum of two primes!\n", n);
            continue;
        }
        else if(n==5){
            printf("5 is the sum of 2 and 3.\n");
            continue;
        }
        else if(n&1){
            i=n-2;
            if(pri[i>>1]==0){
                printf("%d is the sum of 2 and %d.\n", n, i);
            }
            else{
                printf("%d is not the sum of two primes!\n", n);
            }
            continue;
        }
        else{
            i=n/2;
            if(i%2==0)
                i--;
            else if(i<<1==n)
                i-=2;
            while(pri[i>>1]!=0){
                i-=2;
            }
            i = Search(i);
            for(; i>=0; i--) {
                hi = n-prime[i];
                if(prime[i]+hi==n && hi%2==1 && pri[hi>>1]==0){
                    lo=prime[i];
                    break;
                }
            }
            printf("%d is the sum of %d and %d.\n", n, lo, hi);
        }
    }
    return 0;
}
void seive()
{
    int root = sqrt(N)+1, i, j;
    for(i=3; i<=root; i+=2){
        if(pri[i>>1]==0){
            for(j=i*i; j<=N; j+=(i<<1))
                pri[j>>1]=1;
        }
    }
    prime[0]=2;
    for(i=3,j=1; i<N; i+=2){
        if(pri[i>>1]==0){
            prime[j++]=i;
        }
    }
}
int Search(int num)
{

    int start=0, mid, End=num;
    if(End>5761455){
        End=5761455+10;
    }
    mid = (start+End)>>1;
    while(prime[mid]!=num){
        mid = (start+End)>>1;
        if(prime[mid]>num)
            End = mid-1;
        else if(prime[mid]<num)
            start = mid+1;
    }
    return mid;
}
