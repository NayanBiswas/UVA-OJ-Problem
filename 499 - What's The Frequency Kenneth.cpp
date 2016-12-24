#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    char c[150];
    string ch;
    int i, j, len;
    while(getline(cin,ch)){
        for(i=64; i<123; i++)
            c[i]=0;
        int size = ch.size(),top=0;
        for(i=0; i<size; i++){
            if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z')){
                c[ch[i]]++;
                if(top<c[ch[i]])
                    top=c[ch[i]];

            }
        }
        for(j=64; j<123; j++)
                if(c[j] == top)
                    printf("%c",j);
        printf(" %d\n", top);
    }
    return 0;
}
