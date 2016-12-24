#include<stdio.h>
#include<math.h>
#define N 1000010
int lo,hi,test,l,sum,x,cou,root,i,j,top,count_all[N];
bool prime_num[N];
void prime();
int main()
{
    freopen("test.txt","r",stdin);
    root = sqrt(N)+1;
    prime();
    cou = 0;
    scanf("%d",&test);
    for(i=0; i<test; i++){
        scanf("%d%d",&lo,&hi);
        lo==0 ? top=count_all[hi]:top = count_all[hi]-count_all[lo-1];
        printf("%d\n",top);
    }
    return 0;
}
void prime()
{
    for(i=3; i<=root; i+=2){
        for(j=i*i; j<=N; j+=i+i)
            prime_num[j]=1;
    }
    prime_num[0]=prime_num[1]=1;

    for(int i=1; i<=N; i++){
        sum=0;
        l=i;
        if(l==2) cou++;
        if(l&1 && prime_num[l]==0){
            while(l!=0){
                sum+=l%10;
                l/=10;
            }
            if(sum==2) cou++;
            if(sum&1 && prime_num[sum]==0) cou++;
        }
        count_all[i]=cou;
    }
}
