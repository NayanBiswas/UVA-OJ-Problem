#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int row, colum;
char s[111][111];
bool visit[111][111];
int call(int i, int j)
{
    if(i>=row || i<0 || j>=colum || j<0 || visit[i][j]==1) return 0;
    if(s[i][j]=='.') return 0;
    int ans=1;
    visit[i][j]=1;
    ans+=call(i-1, j-1);
    ans+=call(i-1, j);
    ans+=call(i-1, j+1);
    ans+=call(i, j-1);
    ans+=call(i, j+1);
    ans+=call(i+1, j-1);
    ans+=call(i+1, j);
    ans+=call(i+1, j+1);
    return ans;
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    int i, j, ans, x;
    while(scanf("%d%d", &row, &colum)!=EOF){
        if(!row && !colum) break;
        getchar();
        ans=0;
        for(i=0; i<row; i++){
            gets(s[i]);
        }
        ans=0;
        memset(visit, 0, sizeof(visit));
        for(i=0; i<row; i++){
            for(j=0; j<colum; j++){
                if(s[i][j]=='*' && !visit[i][j]){
                    x = call(i,j);
                    if(x==1) ans++;
                }
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}

