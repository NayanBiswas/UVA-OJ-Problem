#include<iostream>
#include<cstdio>
using namespace std;
long long int teram(long long value, long long limit)
{
    if(value==1)
        return 1;
    else if(value>limit)
        return 0;
    return value&1 ? teram((value*3)+1,limit)+1 : teram(value/2,limit)+1;
}
int main()
{
    long long int value, limit, result, cas=1, A;
    while(cin>>value>>limit&&value>0&&limit>0){
        A = value;
        result = teram(value,limit);
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",cas, A, limit, result);
        cas++;
        teram(1,1);
    }
    return 0;
}
