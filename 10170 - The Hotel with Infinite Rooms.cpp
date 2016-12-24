#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int num1, num2, sum, i, j;
    while(cin>>num1>>num2){
        sum = 0;
        for(i=num1; sum<num2; i++){
            sum+=i;
        }
        i--;
        cout<<i<<endl;
    }
    return 0;
}
