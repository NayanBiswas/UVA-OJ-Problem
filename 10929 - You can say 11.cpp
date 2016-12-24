#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    string num;
    while(cin>>num){
        int len = num.length();
        if(len == 1 && num[0]=='0') break;
        long long ans=0;
        for(int i=0; i<len; i++){
            ans = (ans*10)+num[i]-'0';
            if(ans>10)
                ans = fmod(ans,11);
        }
        if(ans==0) cout<<num<<" is a multiple of "<<"11."<<endl;
        else cout<<num<<" is not a multiple of "<<"11."<<endl;
    }
    return 0;
}
