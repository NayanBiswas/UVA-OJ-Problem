#include <stdio.h>
int main()
{
    //freopen("Input.txt", "r", stdin);
    int m, n, hi, lo;
    while (scanf("%d%d", &m, &n)!=EOF){
        if(n<m)hi=m,lo=n;
        else lo=m,hi=n;
        printf("%d\n",((hi-1)*lo+lo-1));
    }
    return 0;
}
