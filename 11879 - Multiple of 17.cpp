#include<stdio.h>
#include<string.h>
int main()
{
    char array[1020];
    int i,j,rev,ln;
    while(scanf("%s",array)!=EOF){
        rev=0;
        ln=strlen(array);
        if(ln==1 && array[0]=='0')
            break;
        for(i=0; i<ln; i++){
            rev=rev*10+(array[i]-'0');
            rev=rev%17;
        }
        if(rev==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
