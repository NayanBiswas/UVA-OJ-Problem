#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
void encoder(char arr[]);
void decoder(char arr[]);
int main()
{
    //freopen("Input.txt", "r", stdin);
    char arr[10000];
    while(gets(arr)){
        int len = strlen(arr);
        for(int i=0, j=len-1; i<(len>>1); j--,i++){
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[j] ^ arr[i];
            arr[i] = arr[i] ^ arr[j];
        }
        if(arr[0]>='0' && arr[0]<='9')
            encoder(arr);
        else
            decoder(arr);
    }
    return 0;
}
void encoder(char arr[])
{
    int num=0;
    for(int i=0; arr[i]!=0; ++i){
        num = (num*10) + (arr[i]-48);
        if(num>30){
            printf("%c", num);
            num = 0;
        }
    }
    puts("");
}
void decoder(char arr[])
{
    int num;
    for(int i=0; arr[i]!=0; i++){
        num = arr[i];
        while(num!=0){
            printf("%d", num%10);
            num/=10;
        }
    }
    puts("");
}
