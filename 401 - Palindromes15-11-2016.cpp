#include <bits/stdc++.h>
using namespace std;
char mirror_p[15]={'A','H','I','M','O','T','U','V','W','X','Y','8','1'};
int main()
{
    //freopen("input.txt","r", stdin);
    bool b;
    string s, ans;
    while(cin>>s){
        b = 0;
        int len = s.size();
        ans = s;
        for(int i=0,j=len-1; i<=len/2; i++,j--){
            if(s[i]==s[j]) b=0;
            else{
                b=1;
                break;
            }
        }
        if(b==0){
            for(int i=0;i<len; i++){
                for(int j=0;j<13;j++){

                    if(s[i]==mirror_p[j]){b=0; break;}

                    else if(j==12){
                        b=1;
                        break;
                    }
                }
                if(b==1) break;
            }
            if(b==0 || ((s[0]=='8' || s[0]=='1')&& len==1))
                cout <<ans<<" -- is a mirrored palindrome."<<endl;
            else if(b==1)
                cout <<ans<<" -- is a regular palindrome."<<endl;
        }
        else{
            b = 0;
            for(int i=0; i<len/2; i++){
                if(s[i]=='3') s[i]='E';
                else if(s[i]=='E') s[i] = '3';
                else if(s[i]=='J') s[i] = 'L';
                else if(s[i]=='L') s[i] = 'J';
                else if(s[i]=='S') s[i] = '2';
                else if(s[i]=='2') s[i] = 'S';
                else if(s[i]=='Z') s[i] = '5';
                else if(s[i]=='5') s[i] = 'Z';
            }
            for(int i=0,j=len-1; i<=len/2; i++,j--){
                if(s[i]==s[j]) b=0;

                else{
                    b=1;
                    break;
                }
            }
            if(b==0) cout<<ans<<" -- is a mirrored string."<<endl;
            else cout<<ans<<" -- is not a palindrome."<<endl;

        }
        cout<<endl;
    }
    return 0;
}

