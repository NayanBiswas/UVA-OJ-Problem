#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    //freopen("Input.txt", "r", stdin);
    char str[111];
    int G, group, len;
    while(cin>>G && G){
        cin>>str;
        len = strlen(str);
        group = len/G;
        for(int i=0; i<len; i+=group){
            for(int j=(group+i)-1; j>=i; j--){
                printf("%c", str[j]);
            }
        }
        cout<<endl;
    }
    return 0;
}
