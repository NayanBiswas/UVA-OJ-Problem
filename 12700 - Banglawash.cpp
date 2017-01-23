#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int test, n, b, w, t, a;
    cin>>test;
    string s;
    for(int T=1; T<=test; T++){
        //if(T!=1)cout<<' ';
        cin>>n>>s;
        b=0, w=0, t=0, a=0;
        for(int i=0; i<n; i++){
            if(s[i]=='B') b++;
            else if(s[i]=='W') w++;
            else if(s[i]=='T') t++;
            else if(s[i]=='A') a++;
        }
        if(a==n) printf("Case %d: ABANDONED", T);
        else if(w==0 && b>0 && t==0) printf("Case %d: BANGLAWASH", T);
        else if(b==0 && w>0 && t==0) printf("Case %d: WHITEWASH", T);
        else if(b>w) printf("Case %d: BANGLADESH %d - %d", T, b, w);
        else if(b<w) printf("Case %d: WWW %d - %d", T, w, b);
        else if(b==w) printf("Case %d: DRAW %d %d", T, b, t);
        cout<<endl;
    }
    return 0;
}
