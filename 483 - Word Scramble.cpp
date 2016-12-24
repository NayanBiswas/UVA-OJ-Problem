#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int len, lo, hi, i, x, j;
    char s[10000];
    while(gets(s)){
        len = strlen(s);
        for(i=0, lo=-1; i<=len; i++){
            if(s[i]==32){
                hi = i-1;
                for(j=hi; j>lo; j--){
                    cout<<s[j];
                }
                cout<<' ';
                lo = i;
            }
        }
        for(j=len-1; j>lo; j--){
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}
