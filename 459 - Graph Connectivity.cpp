#include <bits/stdc++.h>
using namespace std;
vector<int>v[30];
bool visit[30], b;
void My_make_DFS(int c);
void dfs(int c);
int main()
{
    //freopen("Input.txt", "r", stdin);
    int test, len, ans, Max, i, j;
    string s;
    scanf("%d\n\n",&test);
    for(int t=1; t<=test; t++){
        getline(cin,s);
        Max = s[0]-65;
        ans=0;
        memset(visit,0,sizeof(visit));
        memset(v,0,sizeof(v));
        while(getline(cin,s) && s[0]){
            v[s[0]-65].push_back(s[1]-65);
            v[s[1]-65].push_back(s[0]-65);
        }

        for(i=0; i<=Max; i++){
            if(!visit[i]){
                My_make_DFS(i);
                //dfs(i);
                ans++;
            }
        }
        if(t!=1) cout<<endl;
        printf("%d\n", ans);
    }
    return 0;
}
void My_make_DFS(int node)
{
    queue<int>Q;
    int len;
    Q.push(node);
    visit[node]=0;
    while(!Q.empty()){
        node=Q.front();
        len = v[node].size();
        Q.pop();
        for(int i=0; i<len; i++){
            if(!visit[v[node][i]]){
                visit[v[node][i]]=1;
                Q.push(v[node][i]);
            }
        }
    }
}
void dfs(int node)
{
    visit[node]=1;
    int len=v[node].size(), x, i;
    for(i=0; i<len; i++){
        x=v[node][i];
        if(!visit[x]) dfs(x);
    }
}

