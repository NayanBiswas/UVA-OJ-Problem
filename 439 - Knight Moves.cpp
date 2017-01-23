#include <bits/stdc++.h>
using namespace std;
int fx[]={-2, -2, 2, 2, -1, 1, -1, 1};
int fy[]={-1, 1, -1, 1, -2, -2, 2, 2};
bool vis[10][10];
int dis[10][10], Qx, Qy;
struct pii{int x, y;};
int row=8,col=8;
int bfs(int kx, int ky)
{
    memset(vis, 0, sizeof(vis));
    memset(dis, 0, sizeof(dis));
	pii top, temp;
	queue<pii>Q;
	top.x=kx, top.y=ky;
	Q.push(top);
	vis[kx][ky]=1;
	while(!Q.empty()){
		top=Q.front(); Q.pop();
		for(int k=0;k<8;k++){
			kx=top.x+fx[k];
            ky=top.y+fy[k];
			if(kx>=0 && ky>=0 && kx<row && ky<col && vis[kx][ky]==0){
				vis[kx][ky]=1;
				dis[kx][ky]=dis[top.x][top.y]+1;
				temp.x=kx, temp.y=ky;
				if(kx==Qx && ky==Qy){
                    return dis[kx][ky];
				}
				Q.push(temp);
			}
		}
	}
	return 0;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    int x, y, Move;
    char s[5], s1[5];
    while(cin>>s>>s1){
        x = s[0]-97, y = s[1]-49;
        Qx = s1[0]-97, Qy = s1[1]-49;
        Move = bfs(x, y);
        printf("To get from %s to %s takes %d knight moves.\n", s, s1, Move);
    }
    return 0;
}
