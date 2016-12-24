#include <iostream>
#include <cmath>
#include <cstdio>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int test, t;
    double pillars, rope, ans;
    cin>>test;
    for(t=0; t<test; t++){
        cin>>pillars>>rope;
        ans = sqrt((rope/2)*(rope/2)-(pillars/2)*(pillars/2));
        printf("%.3lf\n",pi*ans*(rope/2));
    }
    return 0;
}
