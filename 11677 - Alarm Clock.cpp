#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int h, m, h1, m1, ans, i, j;
    while(1){
        ans=0;
        scanf("%d%d%d%d", &h, &m, &h1, &m1);
        if(!h && !m && !h1 && !m1) break;
        m<m1 ? ans = (m1-m) : (ans = (60-m)+m1, h++);
        if(h<h1 && h!=h1)ans+=((h1-h)*60);
        else if(h>h1) ans+=((24-h)+h1)*60;
        cout<<ans<<endl;
    }
    return 0;
}
