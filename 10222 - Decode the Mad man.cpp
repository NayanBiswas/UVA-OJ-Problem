#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char from[]={"234567890-=ertyuiop[]dfghjkl;'cvbnm,./"};
char   to[]={"`1234567890qwertyuiopasdfghjklzxcvbnm,"};
int main()
{
    ///k[r dyt I[o
    //freopen("Input.txt", "r", stdin);
    char str[900], c;
    int i, j, len;
    while(gets(str)){
        len = strlen(str);
        for(i=0; i<len; i++){
            if(str[i]>=65 && str[i]<=90){
                str[i]+=32;
            }
        }
        for(i=0; i<len; i++){
            c = str[i];
            if(c==92){
                printf("[");
                continue;
            }
            for(j=0; j<38; j++){
                if(from[j]==c){
                    break;
                }
            }
            if(j==38) printf("%c", c);
            else printf("%c", to[j]);
        }
        puts("");
    }
    return 0;
}
