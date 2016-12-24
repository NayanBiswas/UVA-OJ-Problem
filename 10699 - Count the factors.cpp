#include <iostream>
#include <math.h>
#include <cstdio>
#define N 1000000
using namespace std;
int prime[N];
void save();
int main()
{
    int num;
    save();
    while(cin>>num && num!=0){
        bool x = false;
        int finds[1000], cou=0, output=num;
        if(prime[num]==0 && num%2==1)
            cou++;
        else{
            while(num%2 == 0){
                num=num/2;
                x = true;
            }
            if(x==true) cou++;
            for(int n=3; n<=num; n+=2){
                if((prime[n]==0) && (num%n==0)){
                    while(num%n == 0){
                        num/=n;
                    }
                    cou++;
                }
                if(prime[num]==0){
                    cou++;
                    break;
                }
            }
        }
        cout<<output<<" : "<<cou<<endl;
    }
    return 0;
}
void save()
{
    int root=sqrt(N)+1, sum=1;
    for(int i=3; i<=root; i+=2){
        if(prime[i]==0){
            for(int j=i*i; j<=N; j+=i+i){
                prime[j] = 1;
            }
        }
    }
}
