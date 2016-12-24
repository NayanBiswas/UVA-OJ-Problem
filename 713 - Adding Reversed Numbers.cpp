#include<bits/stdc++.h>
int main()
{
    char x[205],y[205];
    int test, i, j, len1, len2, temp, k, sum, top_len, sumx[205];
    scanf("%d",&test);
    while(test--){
        scanf("%s%s",x,y);
        len1 = strlen(x);
        len2 = strlen(y);
        len1--,len2--;
        len1>len2 ? top_len=len1 : top_len=len2;
        for(i=0,j=len1,k=len2; i<=len1/2 || i<=len2/2; i++,j--,k--){
            if(i<j){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
            if(i<k){
                temp = y[i];
                y[i] = y[k];
                y[k] = temp;
            }
        }
        i=top_len;
        j=sum=0;
        while(top_len>=0){
            if(len1>=0 && len2>=0)
                sum = (x[len1]-48)+(y[len2]-48)+sum;
            else if(len1<0 && len2>=0)
                sum = (y[len2]-48)+sum;
            else if(len1>=0 && len2<0)
                sum = (x[len1]-48)+sum;
            sumx[j] = sum%10;
            sum = sum/10;
            len1--;
            len2--;
            top_len--;
            j++;
        }
        if(sum>0){
            sumx[j]=sum;
            i++;
        }
        sum = 0;
        for(j=0; j<=i; j++){
            if(sum==0 && sumx[j]==0)
                continue;
            printf("%d",sumx[j]);
            sum = 1;
        }
        printf("\n");
    }
    return 0;
}
