#include<stdio.h>
int main()
{
    int a,x,y,m,n,c;
    while(scanf("%d",&a)!=EOF){
        if(a==0)
        break;
            scanf("%d%d",&x,&y);
        while(a--){
            scanf("%d%d",&m,&n);
            if(x<m&&y<n)
                printf("NE\n");
            else if(x>m&&y>n)
                printf("SO\n");
            else if(x>m&&y<n)
                printf("NO\n");
            else if(x<m&&y>n)
                printf("SE\n");
            else
                printf("divisa\n");
        }
    }
    return 0;
}
