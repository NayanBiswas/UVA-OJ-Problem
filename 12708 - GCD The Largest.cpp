#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int test;
    long long num;
    scanf("%d", &test);
    while(test--){
        scanf("%lld", &num);
        printf("%lld\n", num>>1);
    }
    return 0;
}
