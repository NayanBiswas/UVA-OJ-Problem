#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000], c;
    int i,ans, ck;
    while(gets(a)){
        ans=0, ck=0;
        for(i=0; a[i]; ++i){
            c = a[i];
            if(ck==0 && ((c>=97 && c<=123) || (c>=65&&c<=90))){
                ans++;
                ck=1;
            }
            else if((c<'A' || c>'Z') && (c<'a' || c>'z')){
                ck=0;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
