#include <cstdio>
#include <iomanip>
#include <iostream>
using namespace std;
void call(long long num);
int main()
{
    //freopen("Input.txt", "r", stdin);
    long long num;
    int t=1;
    while (cin>>num){
        cout<<setw(4)<<t<<'.';
        if (num==0) cout<<" 0";
        call (num);
        cout<<endl;
        t++;
    }
    return 0;
}
void call(long long num)
{
    if(num>=10000000)
        call(num/10000000), cout<<" kuti", num%=10000000;
    if(num>=100000)
        call (num/100000), cout<<" lakh", num%=100000;
    if(num>=1000)
        call (num/1000), cout<<" hajar", num%=1000;
    if(num>=100)
        call(num/100), cout<<" shata", num%=100;
    if(num)
        printf(" %d",num);
}
