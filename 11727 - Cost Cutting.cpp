#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a<b&&b<c || c<b&&b<a)
            printf("Case %d: %d\n",i,b);

        else if(b<a&&a<c || c<a&&a<b)
            printf("Case %d: %d\n",i,a);

        else if(a<c&&c<b || b<c&&c<a)
            printf("Case %d: %d\n",i,c);
    }
    return 0;
}
