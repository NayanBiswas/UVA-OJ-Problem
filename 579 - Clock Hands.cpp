#include<stdio.h>
#include<math.h>
int main()
{
    double H,M,X,Y,ANS;
    while(scanf("%lf:%lf",&H,&M)!=EOF){
        if(H==0 && M==0)
            break;
        X =(H*30)+(M/2);
        Y=(M*6);
        ANS = (X-Y);
        if(ANS<0)
            ANS *= -1;
        if(ANS>180)
            ANS=360-ANS;
        printf("%.3lf\n",ANS);
    }
    return 0;
}
