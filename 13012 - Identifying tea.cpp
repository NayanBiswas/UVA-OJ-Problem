#include <stdio.h>
int main() {
	int n;
	while(scanf("%d", &n)!=EOF){
		int x, ans=0, len=5;
		while(len--){
            scanf("%d",&x);
            if(n==x) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
