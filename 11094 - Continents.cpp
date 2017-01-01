#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char s[22][22], c;
bool visit[22][22], ck;
int row, colum;
int call(int i, int j)
{
    if(j==colum) j=0;
    else if(j==-1) j=colum-1;
    if(i>=row || i<0 || j>=colum || j<0 || visit[i][j]) return 0;
    if(s[i][j]!=c) return 0;
    int ans=1;
    visit[i][j]=1;
    ans+=call(i-1, j);
    ans+=call(i, j-1);
    ans+=call(i, j+1);
    ans+=call(i+1, j);
    return ans;
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    int i, j, ans, x, y, Max;
    while(scanf("%d%d\n", &row, &colum)!=EOF){
        for(i=0; i<row; i++){
            gets(s[i]);
        }
        scanf("%d%d\n", &x, &y);
        c=s[x][y];
        memset(visit, 0, sizeof(visit));
        Max=call(x, y);
        ans=0;
        ck=false;
        for(i=0; i<row; i++){
            for(j=0; j<colum; j++){
                if(s[i][j]==c && visit[i][j]==0){
                    ans=max(ans, call(i, j));
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
