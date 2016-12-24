#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("input.txt","r", stdin);
    char a[1000],s[1000];
    while(gets(a)){
        int len=strlen(a);
        int j=0;
        if(a[0]=='D' && a[1]=='O'&&a[2]=='N'&&a[3]=='E') break;
        for(int i=0; i<len; i++){
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
                if(a[i]>='A' && a[i]<='Z') s[j] = (a[i]-'A'+'a');
                else s[j] = a[i];
                j++;
            }
        }
        bool b=0;
        if(j==0){printf("You won't be eaten!\n"); continue;}
        for(int i=0, l=j-1; i<=j/2; i++,l--){
            if(s[i]==s[l]) b=0;
            else{
                b=1;
                break;
            }
        }
        if(b==0) printf("You won't be eaten!\n");
        else if(b==1) printf("Uh oh..\n");
        a[0] = '\n';
    }
    return 0;
}

