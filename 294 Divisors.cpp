#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    int L, U, test, ans, i, J, root, Max, num;
    cin>>test;
    while(test--){
        scanf("%d%d", &L, &U);
        Max=0;
        for(i=L; i<=U; i++){
            ans = 0;
            if(i&1){
                for(J=1, root=sqrt(i); J<=root; J+=2){
                    if(i%J==0){
                        ans+=2;
                        if(J*J==i) ans--;
                    }
                }
            }
            else{
                for(J=1, root=sqrt(i); J<=root; J++){
                    if(i%J==0){
                        ans+=2;
                        if(J*J==i) ans--;
                    }
                }
            }
            if(ans>Max){
                Max=ans;
                num = i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", L, U, num, Max);
    }
    return 0;
}
