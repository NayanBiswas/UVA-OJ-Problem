#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n,root;
    while(cin>>n && n!=0){
        root = sqrt(n);
        if(root*root==n) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
