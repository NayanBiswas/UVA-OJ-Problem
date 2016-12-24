#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
using namespace std;
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int main()
{
    //freopen("input.txt","r",stdin);
    int n, i, j, Max, store[50];
    while(cin>>n && n!=0){
        if(n<=0) break;
        cout<<setw(3)<<n<<"! =";
        if(n<=2){
            if(n==1)
                cout<<setw(3)<<0<<endl;
            else
                cout<<setw(3)<<1<<endl;
            continue;
        }
        memset(store, 0, sizeof(store));
        while(n!=1)
        {
            i=n, j=0;
            while(i>1)
            {
                Max=0;
                while(i%prime[j]==0)
                {
                    Max++;
                    i/=prime[j];
                }
                store[j]+=Max;
                j++;
            }
            n--;
        }
        for(i=24; i>=0; i--)
            if(store[i]!=0)
                break;
        Max=i;
        for(i=0; i<=Max; i++){
            if(i==15)
                cout<<"\n      ";
            cout<<setw(3)<<store[i];
        }
        cout<<endl;
    }
    return 0;
}
