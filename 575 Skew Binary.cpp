#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char array[1000];
    long long i,j,skew,ln;
    while(scanf("%s",array)!=EOF){
        ln = strlen(array);
        skew=0;
        if(ln == 1 && array[0] == '0')
            break;
        for(i=ln-1,j=1; i>=0; i--,j++){
            skew+=(pow(2,j)-1)*(array[i]-'0');
        }
        printf("%lld\n",skew);
    }
    return 0;
}
