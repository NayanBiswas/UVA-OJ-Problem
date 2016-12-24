#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s,t;
    while(cin>>s>>t){
        int len1 = s.length();
        int len2 = t.length();
        int j=0;
        for(int i=0; i<len2 && j<len1; i++)
            if(s[j] == t[i]) j++;

        if(len1==j) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
