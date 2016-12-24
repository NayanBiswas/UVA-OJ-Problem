#include <iostream>
#include <cstdio>
#include <cstring>
#define arr_size 111
using namespace std;
string s[111];
int row;
bool visit[111][111];
int flood(int i, int j);
int main()
{
    //freopen("input.txt","r",stdin);
    int test, t;
    cin>>test;
    for(t=1; t<=test; t++){
        cin>>row;
        int ans=0;
        for(int i=0; i<row; i++){
            cin>>s[i];
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<row; j++){
                if(!visit[i][j] && s[i][j]=='x')
                    if(flood(i,j)>0) ans++;
            }
        }
        printf("Case %d: %d\n", t, ans);
        memset(visit,0,sizeof(visit));
    }
    return 0;
}
int flood(int i, int j)
{
    if(i<0 || j<0 || i>=row || j>=row) return 0;
    if(visit[i][j]) return 0;
    if(s[i][j]=='.') return 0;
    visit[i][j]=1;
    flood(i-1, j);
    flood(i, j-1);
    flood(i, j+1);
    flood(i+1, j);
    return 1;
}
