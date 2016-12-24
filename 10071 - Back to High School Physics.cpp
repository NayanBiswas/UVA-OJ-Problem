#include<stdio.h>
int main()
{
    int a,b,x;
    while(scanf("%d%d",&a,&b)!=EOF){
        x=(a*b)*2;
        printf("%d\n",x);
    }
    return 0;
}
