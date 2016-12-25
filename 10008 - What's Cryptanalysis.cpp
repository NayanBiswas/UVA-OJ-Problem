#include <iostream>
#include <cstdio>
using namespace std;
int arr[95];
int main()
{
    //freopen("Input.txt", "r", stdin);
    int test, Max, pos, i, j;
    char s[1000][1000], c;
    cin>>test;
    getchar();
    for(i=0; i<test; i++){
        gets(s[i]);
    }
    for(i=0; s[i][0]; i++){
        for(j=0; s[i][j]; j++){
            c = s[i][j];
            if((c>=65 && c<=90) || (c>=97 && c<=122) ){
                    if(c>90) c-=32;
                    arr[c]++;
            }
        }
    }
    for(i=65; i<91; i++){
        Max = 0;
        for(j=65; j<91; j++){
            if(arr[j]>Max){
                Max = arr[j];
                pos = j;
            }
        }
        if(Max>0){
            printf("%c %d\n", pos, arr[pos]);
            arr[pos]=0;
        }
    }
    return 0;
}
