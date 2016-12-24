#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
string s[105];
int row, clam;
bool visit[111][111];
int flat(int i, int j);
int main()
{
    //freopen("input.txt","r",stdin);
    while(cin>>row>>clam){
        if(row==0) break;
        int ans=0;
        for(int i=0; i<row; i++){
            cin>>s[i];
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<clam; j++){
                if(!visit[i][j] && s[i][j]=='@')
                    if(flat(i,j)>0) ans++;
            }
        }
        memset(visit,0,sizeof(visit));
        cout<<ans<<endl;
    }
    return 0;
}
int flat(int i, int j)
{
    int ans=1;
    if(i<0 || j<0 || i>=row || j>=clam) return 0;
    if(visit[i][j]) return 0;
    if(s[i][j]=='*') return 0;
    visit[i][j]=1;
    flat(i-1,j);
    flat(i-1,j-1);
    flat(i-1,j+1);
    flat(i,j-1);
    flat(i,j+1);
    flat(i+1,j-1);
    flat(i+1,j);
    flat(i+1,j+1);
    return 1;
}
