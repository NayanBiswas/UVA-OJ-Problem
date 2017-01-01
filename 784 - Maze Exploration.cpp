#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[50][100];
void flood_fill(int i, int j)
{
    if(!i || !j || s[i][j]=='#' ||s[i][j]=='X' || s[i][j]==0)
        return;
    s[i][j]='#';
    flood_fill(i-1, j-1);
    flood_fill(i-1, j);
    flood_fill(i-1, j+1);
    flood_fill(i, j-1);
    flood_fill(i, j+1);
    flood_fill(i+1, j-1);
    flood_fill(i+1, j);
    flood_fill(i+1, j+1);
    return;
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    int i, j, test;
    scanf("%d\n", &test);
    for(int t=1; t<=test; t++){
        i=0;
        memset(s, 0, sizeof(s));
        while(gets(s[i])){
            if(s[i][0]=='_') break;
            i++;
        }
        for(i=0; s[i][0]; i++){
            for(j=0; s[i][j]; j++){
                if(s[i][j]=='*'){
                    flood_fill(i, j);
                }
            }
        }
        for(i=0; s[i][0]; i++){
            printf("%s\n", s[i]);
        }
    }
    return 0;
}
