#include <iostream>
#include <cstdio>
using namespace std;
int month[]={0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
inline bool lip_year(int year){
    if(year%4==0){
        if(year%100==0 && year%400!=0)return false;
        return true;
    }
    return false;
}
int main() {
    //freopen("input.txt", "r", stdin);
    int d_past, d_now, m_past, m_now, y_past, y_now;
    int test, ans, d_n, d_p;
    scanf("%d", &test);
    for(int t=1; t<=test; t++){
        scanf("%d/%d/%d", &d_now, &m_now, &y_now);
        scanf("%d/%d/%d", &d_past, &m_past, &y_past);
        printf("Case #%d: ", t);
        if(y_now<=y_past){
            if(m_now<m_past || (m_now==m_past && d_now<d_past) || y_now<y_past){
                puts("Invalid birth date");
            }
            else puts("0");
            continue;
        }
        d_n = month[m_now];
        d_p = month[m_past];
        if(m_now==2){
            d_n=28;
            if(lip_year(y_now)==true)
                d_n = 29;
        }
        if(m_past==2){
            d_p=28;
            if(lip_year(y_past)==true)
                d_p = 29;
        }
        if(d_p<d_past || d_n<d_now || m_now>12 || m_past>12 ){
            puts("Check birth date");
        }
        ans = (y_now-y_past);
        if(m_now<m_past){
            ans--;
        }
        if(m_now==m_past && d_now<d_past){
            ans--;
        }
        if(ans>130) puts("Check birth date");
        else printf("%d\n", ans);
    }
    return 0;
}
