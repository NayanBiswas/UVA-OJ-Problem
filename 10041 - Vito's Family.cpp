#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    int arr[509], test, t, i, j, r, temp, ans;
    cin>>test;
    for(t=0; t<test; t++){
        cin>>r;
        ans = 999999999;
        for(i=0; i<r; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr, arr+r);
        for(i=0; i<r; i++){
            temp = 0;
            for(j=0; j<r; j++){
                temp += abs(arr[i]-arr[j]);
            }
            if(temp<ans)
                ans = temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}
