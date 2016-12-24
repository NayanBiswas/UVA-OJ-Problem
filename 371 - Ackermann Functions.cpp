#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long int top(long long i)
{
    long long int Max = 0;
    for(;;){
        if(i%2 == 0)
            i = i/2;
        else if(i%2 == 1)
            i = 3*i + 1;
        Max++;
        if(i==1)
            return Max;
    }
}
int main()
{
    long long int a, b, generates;
    while(scanf("%lld%lld",&a, &b)!=EOF && a!=0 && b!=0){
        long long int Max = 0;
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        for(int i=a; i<=b; i++){
            long long x = top(i);
            if(x>Max){
                Max = x;
                generates=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,generates,Max);
    }
    return 0;
}
