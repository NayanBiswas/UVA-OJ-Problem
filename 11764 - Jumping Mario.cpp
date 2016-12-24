#include<stdio.h>
int main()
{
    int T, Nu, Hi[100], i, j, HG, LG;
    scanf("%d",&T);
    for(j=1; j<=T; j++){
        HG = 0;
        LG = 0;
        scanf("%d",&Nu);
        for(i=0; i<Nu; i++)
            scanf("%d",&Hi[i]);
        for(i=1; i<Nu; i++){
            if(Hi[i] > Hi[i-1])
                HG++;
            else if(Hi[i] < Hi[i-1])
                LG++;
        }
        printf("Case %d: %d %d\n",j, HG, LG);
    }
    return 0;
}
