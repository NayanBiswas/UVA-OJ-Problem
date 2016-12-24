#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int gcd(int a, int b){
	if(a%b==0) return b;
	return gcd(b,a%b);
}
int main(){
	int T,N,a[99],ans;
	string s;
	cin>>T;
	getline(cin,s);
	while(T--){
		getline(cin,s);
		istringstream is(s);
		N = 0;
		while(is>>a[N]) ++N;
		ans = 0;
		for(int i = 0;i<N;++i)
			for(int j = i+1;j<N;++j)
				ans = max(ans,gcd(a[i],a[j]));
		cout<<ans<<endl;
	}
	return 0;
}
/*#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int found(int arr[],int j);
int main()
{
    int arr[200],sum=0,f,i,j,test;
    cin>>test;
    getchar();
    for(int t=1; t<=test; t++){
        string x;
        getline(cin,x);
        int len = x.length();
        for(i=0,j=0; i<len; i++){
            if(x[i]>='0' && x[i]<='9'){
                sum=(sum*10)+x[i]-'0';
                f=1;
            }
            else if(x[i]==' ' && f==1){
                arr[j++] = sum;
                sum = 0;
                f=0;
            }
        }
        arr[j++] = sum;
        sort(arr,arr+j);
        int res = found(arr,--j);
        cout<<res<<endl;
    }
    return 0;
}
int found(int arr[],int j){
    for(int i=j-1; i>=0; i--){
        if(arr[j]%arr[i]==0) return arr[i];
    }
    return 1;
}*/
/*#include<iostream>
#include <sstream>
#include<string>
#include<algorithm>
using namespace std;
int found(int arr[],int j);
int main()
{
    int arr[200],sum=0,f,test;
    string x;
    cin>>test;
    getline(cin,x);
    for(int t=1; t<=test; t++){
        getline(cin,x);
        istringstream is(x);
		int N = 0;
		while(is>>arr[N]) ++N;
        sort(arr,arr+N);
        int res = found(arr,--N);
        cout<<res<<endl;
    }
    return 0;
}
int found(int arr[],int j){
    for(int i=j-1; i>=0; i--){
        if(arr[j]%arr[i]==0) return arr[i];
    }
    return 1;
}*/
