#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    long long test, a, b, c;
    cin>>test;
    for(int t=1; t<=test; t++){
        cin>>a>>b>>c;
        printf("Case %d: ", t);
        if(a<=0 || b<=0 || c<=0)
            cout<<"Invalid"<<endl;
        else if(a+b<=c || a+c<=b || b+c<=a)
            cout<<"Invalid"<<endl;
        else if(a==b && b==c)
            cout<<"Equilateral"<<endl;
        else if(a==b || a==c || b==c)
            cout<<"Isosceles"<<endl;
        else
            cout<<"Scalene"<<endl;
    }
    return 0;
}
