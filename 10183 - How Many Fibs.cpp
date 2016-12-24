#include <iostream>
#include <cstdio>
#include <cstring>
#define N 600
using namespace std;
char x[N], dp[N][N];
void add(char a[], char b[]);
/*This is summation function*/
void store_fib();
/*This function for store Fibonacci*/
int main()
{
    //freopen("input.txt", "r", stdin);
    store_fib();
    char m[1500],n[1500];
    int ans, len_m, len_n, len_dp;
    while(scanf("%s%s",m,n)!=EOF){
        if(m[0]=='0' && n[0]=='0') break;
        len_n=strlen(n);
        len_m=strlen(m);
        ans=0;
        for(int i=0; i<N; i++){
            len_dp=strlen(dp[i]);
            if(len_dp>=len_m && len_dp<=len_n){
                if(len_dp==len_m && strcmp(dp[i],m)<=-1){
                    continue;
                }
                else if(len_dp==len_n && strcmp(dp[i],n)>=1){
                    break;
                }
                else{
                    ans++;
                }
            }
            else if(len_dp>len_n)
                break;
        }
        printf("%d\n", ans);
    }
    return 0;
}
void add(char a[], char b[])
{
    int i, j, k, len, top_len;
    top_len = strlen(a);
    len = strlen(b);
    if(top_len<len)
        return add(b,a);
    int sum=0;
    /*This in main summation loop*/
    for(i=top_len-1,j=0,k=len-1; i>=0; i--,k--){
        if(k<0) sum+=(a[i]-48);
        else sum+=((a[i]-48)+(b[k]-48));
        x[j++] = (sum%10)+48;
        sum/=10;
    }
    if(sum>0) x[j++]=(sum+48);
    len = j>>1;
    /*This loop for reverse*/
    for(i=0, k=j-1; i<len; i++,k--){
        x[i]=x[i]^x[k];
        x[k]=x[k]^x[i];
        x[i]=x[i]^x[k];
    }
}
void store_fib()
{
    char a[N], b[N];
    a[0]='1',b[0]='1';
    a[1]='\0',b[1]='\0';
    for(int i=0; i<N; i++){
        add(a,b);
        /*Call for addition*/
        strcpy(a,b);
        strcpy(b,x);
        strcpy(dp[i],a);
    }
}
