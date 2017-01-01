#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[125][125];
int row, clm, ans[125];
bool visit[125][125];
void flood_fill(int i, int j, char c)
{
    if(i>=row || j>=clm || i<0 || j<0)return;
    if(s[i][j]!=c || visit[i][j]==1) return;
    visit[i][j]=1;
    flood_fill(i-1, j, c);
    flood_fill(i, j-1, c);
    flood_fill(i, j+1, c);
    flood_fill(i+1, j, c);
    return;
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    int i, j, test, Max, pos;
    scanf("%d", &test);
    for(int t=1; t<=test; t++){
        i=0;
        scanf("%d%d\n", &row, &clm);
        for(i=0; i<row; i++){
            scanf("%s",s[i]);
        }
        memset(visit, 0, sizeof(visit));
        memset(ans, 0, sizeof(ans));
        for(i=0; i<row; i++){
            for(j=0; j<clm; j++){
                if(!visit[i][j]){
                    flood_fill(i, j, s[i][j]);
                    ans[s[i][j]]++;
                }
            }
        }
        printf("World #%d\n", t);
        for(i=97; i<123; i++){
            Max=0, pos=0;
            for(j=65; j<123; j++){
                if(ans[j]>Max){
                    Max=ans[j];
                    pos=j;
                }
            }
            if(Max>0){
                printf("%c: %d\n", pos, ans[pos]);
                ans[pos]=0;
            }
        }
    }
    return 0;
}
