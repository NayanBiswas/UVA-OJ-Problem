#include <math.h>
#include <stdio.h>
int main()
{
    int num[32868], n, gcd, par, i, j, temp, a, b;
    while(scanf("%d", &n) && n){
        gcd=0;
        par = n*(n-1)>>1;
        for(i=0; i<n; ++i){
            scanf("%d",&num[i]);
        }
        for(i=0; i<n-1; i++){
            for(j=i+1; j<n; j++){
                if(num[i]>num[j]){
                    a=num[i];
                    b=num[j];
                }
                else{
                    a=num[j];
                    b=num[i];
                }
                while(b){
                    temp = a%b;
                    a = b;
                    b = temp;
                }
                if(a==1) gcd++;
            }
        }
        if(gcd>0) printf("%lf\n", sqrt((1.0*par*6)/gcd));
        else printf("No estimate for this data set.\n");
    }
    return 0;
}
