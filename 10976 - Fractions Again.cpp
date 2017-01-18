#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstring>
using namespace std;
int store_i[20100], store_J[20100];
int finde(int num)
{
    int ans=0, level, i, mult, sub;
    level = num<<1;
    for(i=num+1; i<=level; i++){
        mult=num*i;
        sub=i-num;
        if(mult%sub==0){
            store_J[ans]=mult/sub;
            store_i[ans]=i;
            ans++;
        }
    }
    return ans;
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    int num, i, ans;
    while(scanf("%d", &num)==1){
        ans = finde(num);
        cout<<ans<<endl;
        for(i=0; i<ans; i++){
            printf("1/%d = 1/%d + 1/%d\n",num, store_J[i], store_i[i]);
        }
    }
    return 0;
}
