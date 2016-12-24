#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int test, number, howmany, j;
    cin>>test;
    for(int t=1; t<=test; t++){
        scanf("%d%d", &number, &howmany);
        while(howmany--){
            for(int i=1; i<=number; i++){
                for(j=0; j<i; j++)
                    printf("%d",i);
                printf("\n");
            }
            for(int i=number-1; i>0; i--){
                for(j=i; j>0; j--)
                    printf("%d", i);
                printf("\n");
            }
            if(t!=test || howmany!=0) printf("\n");
        }
    }
    return 0;
}
