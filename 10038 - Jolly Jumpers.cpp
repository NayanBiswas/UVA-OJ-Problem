#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    int n, num, i, num1, arr[3010];
    bool ck;
    while(cin>>n){
        cin>>num1;
        if(n==1){
            printf("Jolly\n");
            continue;
        }
        else if(n==2){
            cin>>num;
            num=abs(num-num1);
            if(num==1) printf("Jolly\n");
            else printf("Not jolly\n");
            continue;
        }
        n--;
        for(i=0; i<n; i++){
            scanf("%d", &num);
            num1=num-num1;
            if(num1<0) num1*=-1;
            arr[i]=num1;
            num1=num;
        }
        ck=false;
        sort(arr, arr+n);
        num=arr[0];
        if(num==1){
            ck=true;
            for(i=1; i<n; i++){
                if(arr[i]==(num+1)) num++;
                else{
                    ck=false;
                    break;
                }
            }
        }
        if(ck==true) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
//3 -1 1 2
