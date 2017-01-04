#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int test, n, num, Max, Min;
    cin>>test;
    while(test--){
        scanf("%d", &n);
        Max=0, Min=999;
        while(n--){
            scanf("%d", &num);
            if(Max<num) Max=num;
            if(Min>num) Min=num;
        }
        printf("%d\n", (Max-Min)<<1);
    }
    return 0;
}
