#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main()
{
    int num, i, x, root, n;
    long long rev;
    while(scanf("%d", &num)!=EOF){
        bool b=0;
        if(num%2==0) b=1;
        else{
            root = sqrt(num)+1;
            for(i=2; i<=root; i++){
                if(num%i==0){
                    b = 1;
                    break;
                }
            }
        }
        if(b==1) printf("%d is not prime.\n", num);
        else{
            b=0;
            n = num, rev=0;
            while(n>0){
                rev = (rev*10)+(n%10);
                n/=10;
            }
            if(rev%2==0) b=1;
            else{
                root = sqrt(rev)+1;
                for(i=2; i<=root; i++){
                    if(rev%i==0){
                        b = 1;
                        break;
                    }
                }
            }
            if(b==1 || num==rev) printf("%d is prime.\n", num);
            else printf("%d is emirp.\n", num);
        }
    }
    return 0;
}
