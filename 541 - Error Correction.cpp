#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    bool arr[105][105];
    int n, i, j, row_sum[111], clum_sum[111];
    while(cin>>n && n){
        memset(row_sum, 0, 111);
        memset(clum_sum, 0, 111);
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                scanf("%d", &arr[i][j]);
                row_sum[i]+=arr[i][j];
                clum_sum[j]+=arr[i][j];
            }
        }
        int row_odd=0, clum_odd=0, ans_row=0, ans_clum=0;
        for(i=0; i<n; i++){
            if(row_sum[i]&1){
                ans_row=i;
                row_odd++;
            }
            if(clum_sum[i]&1){
                ans_clum=i;
                clum_odd++;
            }
            if(clum_odd>1 || row_odd>1) break;
        }
        if(row_odd==0 && clum_odd==0) printf("OK\n");
        else if(row_odd==1 && clum_odd==1)
            printf("Change bit (%d,%d)\n", ++ans_row, ++ans_clum);
        else printf("Corrupt\n");
    }
    return 0;
}
