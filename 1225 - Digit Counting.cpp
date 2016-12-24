#include<cstdio>
#include<iostream>
using namespace std;
int cou[20];
int main()
{
    int N,n,i,x;
    cin>>n;
    while(n--){
        cin>>N;
        for(int j=1; j<=N; j++){
            i=j;
            while(i!=0){
                cou[i%10]++;
                i=i/10;
            }
        }
        for(i=0; i<10; i++){
            if(i!=0)
                cout<<' ';
            cout<<cou[i];
            cou[i]=0;
        }
        cout<<endl;
    }
    return 0;
}
