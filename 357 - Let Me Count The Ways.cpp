#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
long long dp[30003][5], dp2[30009];
int coin;
int cents[]={1,5,10,25,50};
long long ways(int i, int j);
void dpall();
int main()
{
    //freopen("Input.txt","r", stdin);
    int i=0, j=0;
    memset(dp,-1,sizeof(dp));
    while(scanf("%d", &coin)!=EOF){
        if(coin<5)
            printf("There is only 1 way to produce %d cents change.\n", coin);
        else
            printf("There are %lld ways to produce %d cents change.\n",ways(coin, 0) , coin);
    }
    return 0;
}
long long ways(int i, int j)
{
    if(j>4 || i<0) return 0;
    if(i==0) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    dp[i][j]=ways(i,j+1)+ways(i-cents[j],j);
    return dp[i][j];
}
