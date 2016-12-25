#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    string str;
    scanf("%d",&t);
    cin.ignore();
    while(t--)
    {
        getline(cin,str);
        stack<char> stk;
        for(i=0; str[i]; i++){
            if(!stk.empty() && str[i]==')' && stk.top()=='(')
                stk.pop();
            else if(!stk.empty() && str[i]==']' && stk.top()=='[')
                stk.pop();
            else stk.push(str[i]);
        }
        if(stk.empty()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
