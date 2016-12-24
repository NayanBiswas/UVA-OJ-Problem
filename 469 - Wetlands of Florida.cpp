#include <bits/stdc++.h>
using namespace std;
char s[101][101], num[200];
bool v[101][101];
int row,col;
int find_value(int i,int j) {
    if (i<0 || j<0 || i>=row || j>=col) return 0;
    if (v[i][j]) return 0;
    if (s[i][j]=='L') return 0;
    v[i][j]= 1;
    int ans=1;
    ans+=find_value(i-1,j);
    ans+=find_value(i-1,j-1);
    ans+=find_value(i-1,j+1);
    ans+=find_value(i,j+1);
    ans+=find_value(i,j-1);
    ans+=find_value(i+1,j);
    ans+=find_value(i+1,j-1);
    ans+=find_value(i+1,j+1);
    return ans;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int test, n, ans, x, y, i, j, Max, len, temp;
    scanf("%d",&test);
    getchar();
    getchar();

    for(int t=1; t<=test; t++){
        i=0,Max=0;
        bool b=0;
        while(1) {
            gets(s[i]);
            len = strlen(s[i]);
            if(len>Max) Max=len;
            if(s[i][0]>=48 && s[i][0]<='9') break;
            /*This condition for break my input*/
            i++;
        }
        row=i, col=Max;
        j = 0, x = 0, y = 0;
        len = strlen(s[i]);
        while(len--) {
            /*This loop for find my integer number from string*/
            if(b==0  && s[i][j]>='0' && s[i][j]<='9') {
                x = x*10 + (s[i][j]-'0');
            }
            else if(s[i][j]==' ') {
                b=1;
            }
            if(b==1 && s[i][j]>='0' && s[i][j]<='9') {
                y = y*10 + (s[i][j]-'0');
            }
            j++;
        }
        memset(v, 0, sizeof(v));
        ans = find_value(x-1,y-1);
        cout<<ans<<endl;
        while(1){
            num[0]='\n';
            gets(num);
            len = strlen(num);
            if(len<=1 || (num[0]<'0' && num[0]>'9') || num[0]=='\n') break;

            j = 0, x = 0, y = 0, b=0;
            while(len--) {
                /*This loop for find my integer number from string*/
                if(b==0  && num[j]>='0' && num[j]<='9') {
                    x = x*10 + (num[j]-'0');
                }
                else if(num[j]==' ') {
                    b=1;
                }
                if(b==1 && num[j]>='0' && num[j]<='9') {
                    y = y*10 + (num[j]-'0');
                }
                j++;
            }
            memset(v, 0, sizeof(v));
            ans = find_value(x-1,y-1);
            cout<<ans<<endl;
        }
        memset(s,0,sizeof(s));
        row=0,col=0;
        if(t!=test) printf("\n");
    }
    return 0;
}
