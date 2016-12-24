#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll to_dacimal(string num, ll base)
{
    int x, len = num.size();
    ll Dacimal = 0;
    double temp;
    for(int i=len-1,j=0; i>=0; i--,j++){
        if(num[i]>=48 && num[i]<=57) x=(num[i]-48);
        else x = num[i]-55;
        temp = pow(base,j)*x;
        Dacimal += temp;
    }
    return Dacimal;
}
string to_base(ll Dacimal, ll to)
{
    int temp;
    string res="";
    while(Dacimal){
        temp = (Dacimal%to);
        if(temp<10) res+=(temp+48);
        else res+=(temp+55);
        Dacimal/=to;
    }
    if(res=="") return "0";
    else return res;
}
int main()
{
    //freopen("input.txt","r",stdin);
    string num, res, ans;
    ll base, to, Dacimal;
    while(cin>>num>>base>>to){
        res="";
        Dacimal = to_dacimal(num, base);
        res = to_base(Dacimal,to);
        ans="";
        for(int i=res.size()-1; i>=0; i--)
            ans+=res[i];
        if(ans.size()>7) cout<<"  ERROR"<<endl;
        else cout<<setw(7)<<ans<<endl;
    }
    return 0;
}
