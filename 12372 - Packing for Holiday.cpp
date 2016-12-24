#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a, b, c, test;
    while(scanf("%d",&test)!=EOF){
        bool boo;
        for(int t=1; t<=test; t++){
            boo = 0;
            scanf("%d%d%d",&a, &b, &c);
            if(a>20 || b>20 || c>20)
                boo=1;
            if(boo == 0)
                printf("Case %d: good\n", t);
            else if(boo==1)
                printf("Case %d: bad\n", t);
        }
    }
    return 0;
}
