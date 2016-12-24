#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
    int n, cas=1, temp, cou;
    while(scanf("%d",&n)!=EOF){
        cou = 0;
        if(n<0) break;
        for(int i=1; i<n; i++){
            temp = pow(2,i);
            cou++;
            if(temp>=n) break;
        }
        printf("Case %d: %d\n",cas,cou);
        cas++;
    }
    return 0;
}
