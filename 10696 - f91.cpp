#include<cstdio>
#include<iostream>
using namespace std;
int f91(int n)
{
    return n>=101 ? n-10 : f91(f91(n+11));
}
int main()
{
    int n,c;
    while(cin>>n&&n!=0){
        if(n<=100)
            c = f91(n);
        else
            c = n -10;
        cout<<"f91("<<n<<") = "<<c<<endl;
    }
    return 0;
}
