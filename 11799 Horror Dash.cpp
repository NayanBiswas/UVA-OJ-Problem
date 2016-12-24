#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,k[1000],i,j,l;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&m);

        for(j=0; j<m; j++)
            scanf("%d",&k[j]);

        sort(k,k+m);
        reverse(k,k+m);
        printf("Case %d: %d\n",i,k[0]);
    }
    return 0;
}
