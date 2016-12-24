#include<stdio.h>
int main()
{
    long long int H,O,d,temp;
    while(scanf("%lld%lld",&H,&O)!=EOF){
        if(O>H){
            temp=O;
            O=H;
            H=temp;
        }
        d=H-O;
        printf("%lld\n",d);
    }
    return 0;
}
