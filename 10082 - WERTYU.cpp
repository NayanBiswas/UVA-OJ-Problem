#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char from[]={"1234567890-=BCDEFGHIJKLMNOPRSTUVWXY[];',./"};
char   to[]={"`1234567890-VXSWDFGUHJKNBIOEARYCQZTP[L;M,."};
int main()
{
    //freopen("Input.txt", "r", stdin);
    char arr[200], c;
    int i, j;
    while(gets(arr)){
        for(i=0; arr[i]!=0; i++){
            c = arr[i];
            if(c==92){
                printf("]");
                continue;
            }
            for(j=0; from[j]!=0; j++)
                if(from[j]==c) break;
            if(j==42) printf("%c", c);
            else printf("%c", to[j]);
        }
        puts("");
    }
    return 0;
}
