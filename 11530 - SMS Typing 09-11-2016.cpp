#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char c;
    int test, cou;
    while(cin>>test){
        getchar();
        for(int t=1; t<=test; t++){
            cou=0;
            while(1){
                scanf("%c",&c);
                if(c=='a' || c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='t'||c=='w'||c==' ')
                    cou++;
                else if(c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='u'||c=='x')
                    cou+=2;
                else if(c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='v'||c=='y')
                    cou+=3;
                else if(c=='s'||c=='z')
                    cou+=4;
                else break;
            }
            printf("Case #%d: %d\n", t, cou);
        }
    }
    return 0;
}
