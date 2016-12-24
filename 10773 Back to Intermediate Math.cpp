#include<stdio.h>
#include<math.h>
int main()
{
    double distence, boat, flows, tforboat,tforflows, Time;
    int test, i;
    scanf("%d",&test);
    for(i=1; i<=test; i++){
        scanf("%lf%lf%lf",&distence,&flows,&boat);
        if(boat == 0 || flows == 0 || flows>=boat){
            printf("Case %d: can't determine\n",i);
                continue;
        }
        else{
            tforboat = distence / boat;
            tforflows = distence / sqrt((boat * boat)- (flows * flows));
            Time = (tforflows - tforboat);
            printf("Case %d: %.3lf\n",i,Time);
        }
    }
    return 0;
}
