#include<stdio.h>
int main()
{
    int N,num1,num2,count,sum,i,x=1;
    scanf("%d",&N);
    while(N--){
        scanf("%d%d",&num1, &num2);
        sum=0;
        for(i=num1; i<=num2; i++)
            if(i%2==1)
                sum+=i;
        printf("Case %d: %d\n",x,sum);
        x++;
    }
    return 0;
}
