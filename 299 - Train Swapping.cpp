#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    int arr[100], ans, test, train;
    cin>>test;
    while(test--){
        scanf("%d", &train);
        for(int i=0; i<train; i++){
            scanf("%d", &arr[i]);
        }
        ans=0;
        for(int i=0; i<train-1; i++){
            for(int j=i+1; j<train; j++){
                if(arr[i]>arr[j]){
                    arr[i]=arr[i]^arr[j];
                    arr[j]=arr[j]^arr[i];
                    arr[i]=arr[i]^arr[j];
                    ans++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", ans);
    }
    return 0;
}
