#include <iostream>
#include <cstdio>
using namespace std;
bool prime(int num)
{
    if(num==2 || num==3 || num==5 || num==7 || num==13 || num==17)
        return true;
    return false;
}
int main()
{
    int test, num;
    char coma;
    scanf("%d", &test);
    for(int t=0; t<test; t++){
        scanf("%d%c", &num, &coma);
        if(prime(num)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
