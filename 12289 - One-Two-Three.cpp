#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,n,x,m;
    scanf("%d",&n);
    while(n--){
        scanf("%s",a);
        x=strlen(a);
        if((a[0]=='t'|| a[1]=='h' || a[x-1]=='0')&&(x==5))
            m=3;
        else if((a[0]=='t' || a[x-1]=='o')&&(x==3))
            m=2;
        else if((a[0]='o' || a[x-1]=='e')&&(x==3))
            m=1;
        printf("%d\n",m);
    }
    return 0;
}
