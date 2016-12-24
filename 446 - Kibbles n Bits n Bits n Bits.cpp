#include<iostream>
#include<cstdio>
#include<stdlib.h>
int nc1[20],nc2[20];
using namespace std;
int main()
{
	int test;
	cin>>test;
	for(int i=0; i<test; i++){
		char s1[3],c,s2[3];
		cin>>s1>>c>>s2;
		int daci1, daci2;
		daci1 = strtol(s1,NULL,16);
		daci2 = strtol(s2,NULL,16);
		int bin = daci1, binx = daci2, j=0;
		while(bin!=0){
			nc1[j] = bin%2;
			bin/=2;
			j++;
		}
		j=0;
		while(binx!=0){
			nc2[j] = binx%2;
			binx/=2;
			j++;
		}
		if(daci1<daci2){
            int temp = daci1;
            daci1 = daci2;
            daci2 = temp;
		}
		for(int k=12; k>=0; k--)
			printf("%d",nc1[k]);

        if(c == '-') cout<<" - ";
		else cout<<" + ";

		for(int k=12; k>=0; k--)
			printf("%d",nc2[k]);

        if(c == '-') cout<<" = "<<daci1-daci2<<endl;
        else cout<<" = "<<daci1+daci2<<endl;
		for(int k=0; k<15; k++){
			nc1[k]=0;
			nc2[k]=0;
		}
	}
	return 0;
}
