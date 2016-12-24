#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r", stdin);
    char n[1000], m[1000];
    long double a, b;
    char c;
    while(cin>>n>>c>>m){
        cout<<n<<' '<<c<<' '<<m<<endl;
        a = atof(n);
        b = atof(m);
        if(a>2147483647)
            cout<<"first number too big"<<endl;
        if(b>2147483647)
            cout<<"second number too big"<<endl;
        if((c=='+' && (a+b)>2147483647) || (c== '*' && (a*b)>2147483647))
            cout<<"result too big"<<endl;
    }
    return 0;
}
