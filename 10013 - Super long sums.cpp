#include<iostream>
#include<cstring>
#include<cstdio>
long long int arr[2000000],total_sum[2000000];
using namespace std;
void int_rev(long long int arr[], int length);
int main()
{
    int test;
    cin>>test;
    for(int i=0; i<test; i++){
        long long int j, sum=0, length, k;
        cin>>length;
        for(j=0; j<length; j++){
            int x,y;
            cin>>x>>y;
            sum =(x+y);
            arr[j] = sum;
        }
        int_rev(arr,length);
        sum=0;
        for(j=0,k=0; j<length; j++){
            sum+=arr[k];
            total_sum[k]=(sum%10);
            sum=sum/10;
            k++;
        }
        if(sum>0){
            total_sum[j]=sum;
            k++;
        }
        int_rev(total_sum,k);
        for(int x=0; x<k; x++)
            cout<<total_sum[x];
        if(i==(test-1))
            cout<<endl;
        else
            cout<<endl<<endl;
    }
    return 0;
}
void int_rev(long long int arr[],int length)
{
    for(int i=0,j=length-1; i<length/2; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
