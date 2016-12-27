#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#define N 2500
using namespace std;
bool prime[N], ck;
void seive()
{
    int root = sqrt(N), i, j;
    for(i=3; i<=root; i+=2)if(!prime[i])
        for(j=i*i; j<=N; j+=i<<1) prime[j]=1;
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    seive();
    int arr[130], len, test, i, j;
    char s[2052];
    scanf("%d", &test);
    getchar();
    for(int t=1; t<=test; t++){
        gets(s);
        len = strlen(s);
        memset(arr, 0, sizeof(arr));
        for(i=0; i<len; i++){
            arr[s[i]]++;
        }
        printf("Case %d: ", t);
        ck=false;
        for(i=48; i<=122; i++){
            if(arr[i]>1){
                if(arr[i]&1 && prime[arr[i]]==0){
                    printf("%c",i);
                    ck=true;
                }
                else if(arr[i]==2){
                    printf("%c",i);
                    ck=true;
                }
            }
        }
        if(ck==false) printf("empty");
        cout<<endl;
    }
    return 0;
}
