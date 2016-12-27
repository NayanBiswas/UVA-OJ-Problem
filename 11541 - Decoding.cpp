#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    char str[500], c;
    int len, num, i, j, test;
    scanf("%d\n", &test);
    for(int t=1; t<=test; t++){
        gets(str);
        len = strlen(str);
        printf("Case %d: ", t);
        for(i=0; i<len; i++){
            if(str[i]>='0' && str[i]<='9'){
                num=0;
                c = str[i-1];
                while(str[i]>='0' && str[i]<='9'){
                    num=(num*10)+(str[i]-48);
                    i++;
                }
                for(j=0; j<num; j++){
                    printf("%c", c);
                }
                i--;
            }
        }
        cout<<endl;
    }
    return 0;
}
