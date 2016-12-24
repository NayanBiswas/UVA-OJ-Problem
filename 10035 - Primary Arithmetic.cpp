#include <stdio.h>
int main()
{
    long x,y, add, count;
    while(1){
        scanf("%ld %ld",&x,&y);
        count=0;
        add=0;
        if(x==0 && y==0)
            break;
        while(x!=0 || y!=0){
           if((x%10+y%10)+add>9){
                count++;
                add=1;
           }
           else
                add=0;
           x/=10;
           y/=10;
        }
        if(count==0)
            puts("No carry operation.");
        else if(count==1)
             printf("%d carry operation.\n",count);
        else
            printf("%d carry operations.\n",count);
    }
    return 0;
}
