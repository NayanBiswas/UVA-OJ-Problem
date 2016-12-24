#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, arr[110], sum, division, cou, cas=1;
    while(scanf("%d",&n)!=EOF){
        cou=0;
        if(n<=0) break;
        sum = 0;
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        division = sum/n;
        for(int i=0; i<n; i++){
            if(arr[i]>division)
                cou+=arr[i]-division;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",cas, cou);
        cas++;
    }

    return 0;
}
