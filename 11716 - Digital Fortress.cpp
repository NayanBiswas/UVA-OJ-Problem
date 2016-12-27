#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    int len, n, i, j, test;
    char str[10011];
    scanf("%d\n", &test);
    for(int t=1; t<=test; t++){
        gets(str);
        len = strlen(str);
        n = sqrt(len);
        if((n*n)!=len)
            cout<<"INVALID"<<endl;
        else{
            for(i=0; i<n; i++){
                for(j=i; j<len; j+=n){
                    printf("%c", str[j]);
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
