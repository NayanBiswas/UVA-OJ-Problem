#include<stdio.h>
int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        if((num>=0 && num<=7) || (num<0 && !(num&1)))
            printf("Underflow!\n");
        else if(num==8) printf("40320\n");
        else if(num==9) printf("362880\n");
        else if(num==10) printf("3628800\n");
        else if(num==11) printf("39916800\n");
        else if(num==12) printf("479001600\n");
        else if(num==13) printf("6227020800\n");
        else printf("Overflow!\n");
    }
    return 0;
}
