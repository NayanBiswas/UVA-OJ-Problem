#include <iostream>
#include <cstdio>
#include <cmath>
#define N 4294967295
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    int i, num, x;
    bool ans;
    while(scanf("%d", &num)!=EOF){
        ans = true;
        while(num>1){
            if(ans){
                x = (num%9);
                num/=9;
                if(x) num++;
            }
            else{
                x = (num&1);
                num/=2;
                if(x) num++;
            }
            ans=!ans;
        }
        if(!ans) printf("Stan wins.\n");
        else printf("Ollie wins.\n");
    }
    return 0;
}
