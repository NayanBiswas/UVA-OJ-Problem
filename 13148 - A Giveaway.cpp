#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    int num, arr[]={1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441, 1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,47045881, 64000000, 85766121};
    bool ck;
    while(scanf("%lld", &num) && num){
        ck=false;
        for(int i=0; i<21; i++){
            if(arr[i]==num){
                ck=true;
            }
        }
        printf(ck ? "Special\n" : "Ordinary\n");
    }
    return 0;
}
