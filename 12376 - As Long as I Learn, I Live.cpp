#include <bits/stdc++.h>
#define N 1005
using namespace std;
int graph[N][N];
int main()
{
    //freopen("input.txt","r",stdin);
    int test, n, m, i, x, y, total, mov, l, num;
    int nod[N], arr[N]={0};
    scanf("%d",&test);
    for(int t=1; t<=test; t++){
        scanf("%d%d",&n, &m);
        for(i=0; i<n; i++){
            scanf("%d",&nod[i]);
        }
        memset(arr, 0, sizeof(arr));
        for(i=0; i<m; i++){
            scanf("%d%d",&x, &y);
            graph[x][arr[x]++]=y;
        }
        total=0, num=0;
        while(1){
            total += nod[num];
            mov = 0;
            for(i=0; i<arr[num]; i++){
                if(nod[graph[num][i]] > mov){
                    l = graph[num][i];
                    mov = nod[l];
                }
            }
            if(mov == 0) break;
            num = l;

        }
        printf("Case %d: %d %d\n", t, total, num);
    }
    return 0;
}
