#include<stdio.h>
#include<string.h>
int main()
{
    char nm[100],sub[100]="Hajj", sub1[100]="Umrah";
    int i=1,ch;
    while(scanf("%s",nm)!=EOF && nm[0] != '*'){
        ch=0;
        if(strcmp(sub,nm)==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(strcmp(sub1,nm)==0)
            printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
    return 0;
}
