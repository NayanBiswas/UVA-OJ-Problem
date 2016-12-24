#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string ch;
    while(cin>>ch){
        int ln = ch.length();
        for(int i=0; i<ln; i++){
            ch[i]-=7;
            cout<<ch[i];
        }
        cout<<endl;
    }
    return 0;
}
