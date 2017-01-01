#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    int test=1, i, j, n, x, sum[7], num;
    while(cin>>n, n){
        n--;
        for(i=0; i<7; i++)sum[i]=0;
        for(i=0; i<=n; i++){
            for(j=0; j<=n; j++){
                scanf("%d", &num);
                if(j==0 || i==0 || j==n || i==n)
                    sum[0]+=num;
                else if(j==1 || i==1 || j==n-1 || i==n-1)
                    sum[1]+=num;
                else if(j==2 || i==2 || j==n-2 || i==n-2)
                    sum[2]+=num;
                else if(j==3 || i==3 || j==n-3 || i==n-3)
                    sum[3]+=num;
                else if(j==4 || i==4 || j==n-4 || i==n-4)
                    sum[4]+=num;
                else if(j==5 || i==5 || j==n-5 || i==n-5)
                    sum[5]+=num;
            }
        }
        n++;
        x=n>>1;
        if(n&1) x++;
        printf("Case %d:", test);
        for(i=0; i<x; i++)cout<<' '<<sum[i];
        cout<<endl;
        test++;
    }
    return 0;
}
