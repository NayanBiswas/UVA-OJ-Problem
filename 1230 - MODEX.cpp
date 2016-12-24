#include <stdio.h>
int x, n;
int md(int y)
{
    if(y==0) return 1;
    if(y&1){
        return ((x%n)*md(y-1))%n;
    }
    else{
        int c = md(y>>1);
        return (c*c)%n;
    }
}
int main()
{
    int y, test;
    while(scanf("%d",&test)==1 && test!=0){
        while(test--){
            scanf("%d%d%d",&x,&y,&n);
            printf("%d\n", md(y));
        }
    }
    return 0;
}

