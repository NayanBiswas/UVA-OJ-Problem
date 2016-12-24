#include <iostream>
#include <cstdio>
using namespace std;
class ans
{
    int a, b;
public:
    ans (){a=0; b=0;}
    ans (int n, int m){a=n; b=m;}
    void set(int n, int m){a=n; b=m;}
    void print(){cout<<(a/3)*(b/3)<<endl;}
};
int main()
{
    int n, m, test;
    ans x;
    while(cin>>test){
        for(int t=1; t<=test; t++){
            cin>>n>>m;
            x.set(n,m);
            x.print();
        }
    }
    return 0;
}
