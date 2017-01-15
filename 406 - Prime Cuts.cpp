#include <iostream>
#include <cstdio>
#include <cmath>
#define LMT 1111
using namespace std;
bool pri[LMT+5];
int prime[LMT+5];
int length[LMT+5];
void seive()
{
    int i, J, root=(int)sqrt(LMT);
    for(i=3; i<=root; i+=2)if(!pri[i]){
        for(J=i*i; J<LMT; J+=i<<1)pri[J]=1;
    }
    prime[0]=1, prime[1]=2, length[1]=1, length[2]=2;
    for(i=3, J=2; i<LMT; i+=2){
        if(!pri[i])
            prime[J++]=i;
        length[i]=J, length[i+1]=J;
    }
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    seive();
    int N, C, i, len, Mid, End;
    while(scanf("%d%d", &N, &C)!=EOF){
        printf("%d %d:", N, C);
        len = length[N];
        Mid = C<<1;
        if(len&1) Mid--;
        if(Mid>len){
            for(i=0, End=length[N]; i<End; i++)
                printf(" %d", prime[i]);
        }
        else{
            i = (len-Mid)>>1;
            while(Mid--){
                printf(" %d", prime[i++]);
            }
        }
        puts("\n");
    }
    return 0;
}
