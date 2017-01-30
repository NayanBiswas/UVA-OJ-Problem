#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[1000][1000], c;
int cloum, row;

void Mines(int i, int J) {
    if(i-1>=0 && s[i-1][J]!='*') s[i-1][J]++;
    if(J-1>=0 && s[i][J-1]!='*') s[i][J-1]++;
    if(J+1<row && s[i][J+1]!='*') s[i][J+1]++;
    if(i+1<cloum && s[i+1][J]!='*') s[i+1][J]++;

    if(i-1>=0 && J-1>=0 && s[i-1][J-1]!='*') s[i-1][J-1]++;
    if(i-1>=0 && J+1<row && s[i-1][J+1]!='*') s[i-1][J+1]++;
    if(i+1<cloum && J-1>=0 && s[i+1][J-1]!='*') s[i+1][J-1]++;
    if(i+1<cloum && J+1<row && s[i+1][J+1]!='*') s[i+1][J+1]++;
}
int main() {
    //freopen("input.txt", "r", stdin);
    int i, J, t=0;
    while(scanf("%d%d\n", &cloum, &row)!=EOF) {
        if(cloum==0 && row==0) break;
        for(i=0; i<cloum; i++){
            scanf("%s", s[i]);
            for(J=0; J<row; J++){
                if(s[i][J]=='.') s[i][J]='0';
            }
        }
        if(t) puts("");
        t++;
        printf("Field #%d:\n", t);
        for(i=0; i<cloum; i++){
            for(J=0; J<row; J++){
                if(s[i][J]=='*'){
                    Mines(i, J);
                }
            }
        }
        for(i=0; i<cloum; i++){
            puts(s[i]);
        }
    }
    return 0;
}
