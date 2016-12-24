#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int test, i, t, n, x, ans, num[22]={0};
    bool b=0;
    cin>>test;
    for(t=1; t<=test; t++){
        scanf("%d",&n);

        for(i=0; i<n; i++){
            scanf("%d", &x);
            num[x]++;
        }
        if(n&1) b=1;
        n/=2;
        if(b==1) n++;
        for(i=9; i<22; i++){
            if(num[i]>0){
                ans=i;
                n--;
                if(n==0) break;
            }
        }
        printf("Case %d: %d\n",t, ans);
        memset(num,0,sizeof(num));
    }
    return 0;
}
