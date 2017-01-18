#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;
int many[130];
char arr[100], s[80];
bool palindrom(int lo, int hi)
{
    int i=lo, J=hi;
    for(; lo<hi; lo++, hi--){
        //printf("%c %c\n", arr[lo], arr[hi]);
        if(arr[lo]!=arr[hi]){
            return false;
        }
    }
    //for(; i<=J; i++)printf("%c",arr[i]);cout<<endl;
    return true;
}
int main()
{
    //freopen("Input.txt", "r", stdin);
    int ans, i, J, k;
    bool ck;
    while(scanf("%s", arr)!=EOF){
        ans=0;
        map<string, int>M;
        memset(many, 0, sizeof(many));
        for(i=0; arr[i]; i++){
            if(many[arr[i]]==0){
                many[arr[i]]=1;
                ans++;
            }
        }
        for(i=0; arr[i]; i++){
            k=0;
            s[k++]=arr[i];
            for(J=i+1; arr[J]; J++){
                s[k++]=arr[J];
                if(arr[i]==arr[J]){
                    ck = false;
                    ck = palindrom(i, J);
                    if(ck==true){
                        if(M[s]==0) ans++;
                        M[s]++;
                    }
                }
            }
            memset(s, 0, sizeof(s));
        }
        printf("The string '%s' contains %d palindromes.\n", arr, ans);
    }

    return 0;
}
