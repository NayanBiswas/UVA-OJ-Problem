#include <bits/stdc++.h>
using namespace std;
int bottle[10];
char comdination[6][4]={"BCG","BGC","CBG","CGB","GBC","GCB"};
int exenge(int a, int b, int c, int pos)
{
    if(pos==9) return 0;
    if(a!=pos && b!=pos && c!=pos)
        return exenge(a, b, c, pos+1)+bottle[pos];
    else
        return exenge(a, b, c, pos+1);
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    int i, Min, temp[10], pos;
    while(cin>>bottle[0]){
        for(int i=1; i<9; i++){
            scanf("%d", &bottle[i]);
        }
        temp[0] = exenge(0, 5, 7, 0);
        temp[1] = exenge(0, 4, 8, 0);
        temp[2] = exenge(2, 3, 7, 0);
        temp[3] = exenge(2, 4, 6, 0);
        temp[4] = exenge(1, 3, 8, 0);
        temp[5] = exenge(1, 5, 6, 0);
        Min=INT_MAX;
        for(i=0; i<6; i++){
            if(temp[i]<Min)
                Min = temp[i], pos=i;
        }
        printf("%s %d\n", comdination[pos], Min);
    }
    return 0;
}
