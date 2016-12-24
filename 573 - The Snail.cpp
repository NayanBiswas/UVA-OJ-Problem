#include<stdio.h>
int main()
{
    float U,X,Y;
    int i,H,D,F;
    while(scanf("%d%f%d%d",&H,&U,&D,&F)!=EOF){
        if(H==0)
            break;
        X=0;
        i=1;
        Y=(F*U)/100;
        while(1){
            X=X+U;
            if(U>0) U=U-Y;
            if(X>H) break;
            X=X-D;
            if(X<0) break;
            i++;
        }
        if(X>H)
            printf("success on day %d\n",i);
        else
            printf("failure on day %d\n",i);
    }
    return 0;
}
