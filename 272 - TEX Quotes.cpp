#include<stdio.h>
#include<string.h>
char x[100000];
int main()
{
    long int i, len, ch=1;
    while(gets(x)){
        len = strlen(x);
        for(i=0; i<len; i++){
            if(x[i]=='"'){
                if(ch%2==1)
                    printf("``");
                else
                    printf("''");
                ch++;
            }
            else
                printf("%c",x[i]);
        }
        printf("\n");
    }
    return 0;
}
