#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,count,x;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(a==0&&b==0)
            break;
        count=0;
        for(i=a; i<=b; i++){
            x=sqrt(i)*100000;
            if(x%100000==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
