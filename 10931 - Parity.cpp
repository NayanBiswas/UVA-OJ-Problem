#include<stdio.h>
#include<string.h>
int main()
{
    long long int i, j, I, cou;
    int arr[50];
    while(scanf("%lld",&I)!=EOF && I !=0){
        i = 0;
        cou = 0;
        while(I!=0){
            arr[i] = I % 2;
            if(arr[i] == 1)
                cou++;
            I = I / 2;
            i++;
        }
        printf("The parity of ");
        if(I == 0 && i == 0)
            printf("0");
        while(i!=0){
            i--;
            printf("%d",arr[i]);
        }
        printf(" is %lld (mod 2).\n",cou);
    }
}
