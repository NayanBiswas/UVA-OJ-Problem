#include <iostream>
#include <cstdio>
#include <cstring>
#define N 10000000
using namespace std;
bool save[N], b;
int finds(int Z, int I, int M, int L)
{
    int ans, cou=0, temp;
    if(save[L]>0) return 0;
    if(b!=0) save[L]=1;
    L = (Z*L+I)%M;
    b=1;
    return finds(Z, I, M, L)+1;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int Z, I, M, L, ans, t=1;
    while(scanf("%d%d%d%d",&Z, &I, &M, &L)!=EOF){
        if(Z==0 && I==0 && M==0 && L==0)
            break;
        b=0;
        ans = finds(Z, I, M, L);
        printf("Case %d: %d\n",t++,ans-1);
        memset(save,0,sizeof(save));
        b=0;
    }
    return 0;
}
