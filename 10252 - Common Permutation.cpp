#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    string a, b;
    int a1[130], b1[130], len1, len2, i, Min, j;
    while(getline(cin,a)){
        getline(cin,b);
        memset(a1, 0, sizeof(a1));
        memset(b1, 0, sizeof(b1));
        len1 = a.size();
        len2 = b.size();
        for(i=0; i<len1 || i<len2; i++){
            if(i<len1){
                a1[a[i]]++;
            }
            if(i<len2){
                b1[b[i]]++;
            }
        }
        Min = 0;
        for(i=90; i<=122; i++){
            if(a1[i]>0 && b1[i]>0){
                a1[i] < b1[i] ? Min = a1[i] : Min = b1[i];
                for(j=0; j<Min; j++)
                    printf("%c",i);
                Min=0;
            }
        }
        printf("\n");
    }
    return 0;
}
