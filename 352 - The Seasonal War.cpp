#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
string s[105];
int row;
bool visit[111][111];
int flat(int i, int j);
int main()
{
    //freopen("input.txt","r",stdin);
    int test=1;
    while(cin>>row){
        if(row==0) break;
        int ans=0;
        for(int i=0; i<row; i++){
            cin>>s[i];
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<row; j++){
                if(!visit[i][j] && s[i][j]=='1')
                    if(flat(i,j)>0) ans++;
            }
        }
        printf("Image number %d contains %d war eagles.\n",test, ans);
        test++;
        memset(visit,0,sizeof(visit));
    }
    return 0;
}
int flat(int i, int j)
{
    int ans=1;
    if(i<0 || j<0 || i>=row || j>=row) return 0;
    if(visit[i][j]) return 0;
    if(s[i][j]=='0') return 0;
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
