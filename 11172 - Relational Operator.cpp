#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&a,&b);
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else if(a==b)
            printf("=\n");
    }
    return 0;
}
