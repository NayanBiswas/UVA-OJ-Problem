#include <stdio.h>
#include <string.h>
int main()
{
	int test=1;
	char s[20];
	while(scanf("%s",s)!=EOF){
		if(s[0]=='#') return 0;
		printf("Case %d: ",test++);
		if(strcmp(s,"HELLO")==0) printf("ENGLISH\n");
		else if(strcmp(s,"HOLA")==0) printf("SPANISH\n");
		else if(strcmp(s,"HALLO")==0) printf("GERMAN\n");
		else if(strcmp(s,"BONJOUR")==0) printf("FRENCH\n");
		else if(strcmp(s,"CIAO")==0) printf("ITALIAN\n");
		else if(strcmp(s,"ZDRAVSTVUJTE")==0) printf("RUSSIAN\n");
		else printf("UNKNOWN\n");
	}
	return 0;
}
