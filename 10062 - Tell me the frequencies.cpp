#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int ascci[135];
int main()
{
    //freopen("Input.txt", "r", stdin);
    char str[1000];
    int i, j, len, k=0, Max;
    while(gets(str)){
        if(k!=0) cout<<endl;
        memset(ascci, 0, 135);
        len = strlen(str);
        for(i=0; i<len; i++)
            ascci[str[i]]++;

        for(i=128; i>=32; --i){
            Max=1011, k=0;
            for(j=128; j>=32; --j){
                if(ascci[j]>0 && ascci[j]<Max){
                    Max=ascci[j];
                    k=j;
                }
            }
            if(k>0){
                printf("%d %d\n", k, ascci[k]);
                ascci[k]=0;
            }
        }
        k=10;
    }


    return 0;
}
