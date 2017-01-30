#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char year[100000];
int fore, fore_h, H, fifty_f, f_n;
void ck() {
    fore=fore_h=H=fifty_f=f_n=0;
    int len = strlen(year), num;
    for(int i=0; i<len; i++){
        num = year[i]-48;
        fore=(fore*10)+num;
        fore_h=(fore_h*10)+num;
        H=(H*10)+num;
        fifty_f=(fifty_f*10)+num;
        f_n=(f_n*10)+num;
        if(fore>=4) fore%=4;
        if(fore_h>=400) fore_h%=400;
        if(H>=100) H%=100;
        if(f_n>=15) f_n%=15;
        if(fifty_f>=55) fifty_f%=55;
    }
}
int main() {
    //freopen("input.txt", "r", stdin);
    int i=0;
    while(scanf("%s", year)!=EOF) {
        int k=0, bul=0;
        if(i) puts("");
        ck();
        if(fore==0){
            if(H==0 && fore_h==0){
                puts("This is leap year.");
                bul=1;
                k++;
            }
            else if(H!=0){
                puts("This is leap year.");
                bul=1;
                k++;
            }
        }
        if(f_n==0){
            puts("This is huluculu festival year.");
            k++;
        }
        if(fifty_f==0 && bul==1){
            puts("This is bulukulu festival year.");
            k++;
        }
        if(k==0) puts("This is an ordinary year.");
        i++;
    }
    return 0;
}
