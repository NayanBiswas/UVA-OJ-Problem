#include<iostream>
#include<string>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int len = s.length();
        if((s[0]-'0')<0)
            break;
        int H, H1=0, D, D1, i=0;
        --len;
        if(s[0]=='0' && s[1]=='x'){
            for(;;){
                if(s[len]=='A') H = 10;
                else if(s[len]=='B') H = 11;
                else if(s[len]=='C') H = 12;
                else if(s[len]=='D') H = 13;
                else if(s[len]=='E') H = 14;
                else if(s[len]=='F') H = 15;
                else H = s[len]-'0';
                H1 += H*pow(16,i);
                len--;
                i++;
                if(len==1)
                    break;
            }
            cout<<H1<<endl;
        }

        else{
            for(i=D1=0; i<=len; i++){
                D = s[i]-'0';
                D1 = D1*10+D;
            }
            i=0;
            int arr[1000];
            while(D1!=0){
                arr[i]=D1%16;
                D1/=16;
                i++;
            }
            cout<<"0x";
            for(int j=i-1; j>=0; j--){
                if(arr[j]>9) printf("%c",arr[j]-10+65);
                else printf("%d",arr[j]);
            }
            cout<<endl;
        }
    }
    return 0;
}
