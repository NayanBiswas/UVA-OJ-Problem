#include <iostream>
using namespace std;
int main()
{
    int n, ans, rest,x;
    while(cin>>n){
        ans = n;
        while(n>=3){
            rest=0;
            ans+=(n/3);
            rest=(n/3)+(n%3);
            n=rest;
        }
        if(n>1) ans++;
        cout<<ans<<endl;
    }
    return 0;
}
