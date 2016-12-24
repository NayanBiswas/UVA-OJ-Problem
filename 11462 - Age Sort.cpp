#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int arr[2000010];
int main()
{
    int n, i;
    while(scanf("%d",&n)!=EOF && n!=0){
        for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+i);
        printf("%d",arr[0]);
        for(i=1; i<n; i++){
            printf(" %d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
