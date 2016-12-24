#include<stdio.h>
long long int sum(long long int x){
    long long int n = 0, l;
    while(x!=0){
        l=x%10;
        n+=l;
        x=x/10;
    }
    return n;
}
int main()
{
    long long int n, j;
    while(scanf("%lld",&n)!=EOF && n != 0){
        for(;;){
            j = sum(n);
            if(j<=9)
                break;
            n=j;
        }
        printf("%lld\n",j);
    }
    return 0;
}
