#include<stdio.h>
#include<string.h>
int main()
{
    long long int sum=0;
    char c[10], ch[10];
    int test,K,ck;
    scanf("%d",&test);
    while(test--){
        scanf("%s", c);
        if(strcmp("report",c)==0)
            printf("%lld\n",sum);
        else{
            scanf("%d",&K);
            sum+=K;
        }
    }
    return 0;
}
