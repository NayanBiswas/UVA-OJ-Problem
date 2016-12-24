#include<iostream>
#include<cstdio>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    string ch;
    while(cin>>ch){
        bool bl=true;
        int sum =0,x;
        int size = ch.length();
        for(int i=0; i<size; i++){
            if(ch[i]>='A' && ch[i]<='Z'){
                x=27;
                for(int j=65; j<ch[i]; j++)
                    x++;
            }
            else if(ch[i]>='a' && ch[i]<='z'){
                x=1;
                for(int j=97; j<ch[i]; j++)
                    x++;
            }
            sum+=x;
        }
        if(sum<=2){
            bl = true;
        }
        else if(sum%2==0){
            bl=false;
        }
        else{
            int root = (sqrt(sum)+1);
            for(int i=2; i<=root; i++){
                if(sum%i==0){
                    bl=false;
                    break;
                }
            }
        }
        if(bl==true)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
    return 0;
}
