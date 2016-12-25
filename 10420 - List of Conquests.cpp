#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>
using namespace std;
map <string, int>mp;
char s[100000], m[10000][500], c, temp[500];
int main()
{
    //freopen("Input.txt", "r", stdin);
    int test, i, j, k, pos;
    cin>>test;
    getchar();
    for(i=0; i<test; i++){
        gets(s);
        for(j=0, k=0; s[j]; j++){
            if((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122)){
                m[i][k++]=s[j];
            }
            else if(k>0){
                m[i][k]=0;
                break;
            }
        }
        mp[m[i]]++;
    }
    for(i=0; i<test-1; i++){
        for(j=i+1; j<test; j++){
            if(strcmp(m[i],m[j])>=1){
                strcpy(temp, m[j]);
                strcpy(m[j], m[i]);
                strcpy(m[i], temp);
            }
        }
    }
    for(i=0; i<test; i++){
        if(mp[m[i]]>0){
            printf("%s %d\n", m[i], mp[m[i]]);
            mp[m[i]]=0;
        }
    }
    return 0;
}
