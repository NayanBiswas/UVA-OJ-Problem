#include <iostream>
#include <cstdio>
int arr[1020];
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n, i, j, ans, pos, Min;
    while(scanf("%d",&n)!=EOF){
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        ans=0;
        for(i=0; i<n; i++){
            pos=0;
            for(j=i+1; j<n; j++){
                if(arr[j]<arr[i]){
                    ans++;
                    pos=j;
                }
            }
            if(pos>0){
                arr[j]= arr[i] ^ arr[j];
                arr[i]= arr[j] ^ arr[i];
                arr[j]= arr[i] ^ arr[j];
            }
        }
        //for(i=0; i<n; i++) cout<<arr[i]<<' ';
        //cout<<endl;
        printf("Minimum exchange operations : %d\n",ans);
    }
    return 0;
}
