#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int a, b, ans, t=1;
    while(scanf("%d%d", &a, &b)!=EOF){
        if(!a || !b) return 0;
        ans=a/b;
        if(ans>26){
            printf("Case %d: impossible\n", t);
            t++;
            continue;
        }
        if(a%b==0) ans--;
        printf("Case %d: %d\n", t, ans);
        t++;
    }
}
