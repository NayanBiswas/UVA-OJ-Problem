#include<stdio.h>
#define N 10000
int main()
{
    long int decimal;
    int i,j,base3[N];
    while(scanf("%ld",&decimal)!=EOF && decimal >= 0){
        i=0;
        while(decimal != 0){
            base3[i] = decimal % 3;
            decimal = decimal / 3;
            i++;
        }
        if(i==0)
            printf("0");
        for(j=i-1; j>=0; j--)
            printf("%ld",base3[j]);
        printf("\n");
    }
    return 0;
}
