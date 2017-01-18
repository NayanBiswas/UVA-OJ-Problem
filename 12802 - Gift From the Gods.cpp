#include <iostream>
#include <cstdio>
#include <cmath>
#define SIZ 1000000
using namespace std;
bool pri[SIZ+5], ck;
void seive()
{
    int i, J, root=sqrt(SIZ);
    for(i=3; i<=root; i+=2)if(!pri[i]){
        for(J=i*i; J<=SIZ; J+=i<<1)pri[J]=1;
    }
}
bool palin(int i)
{
    int num=0, x=i;
    while(x){
        num = (num*10)+x%10;
        x/=10;
    }
    if(num==i)return true;
    return false;
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    seive();
    int num;
    while(scanf("%d", &num)!=EOF){
        num <<=1;
        printf("%d\n",num);
        num>>=1;
        if((num==2)||(num&1 && pri[num]==0 && palin(num)==true))
            return 0;
    }
    return 0;
}
