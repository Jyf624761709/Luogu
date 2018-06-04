#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define frin(t) freopen("t.in","r",stdin)
#define frout(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int main(){
    int a,b,c;
    double s;
    scanf("%d%d%d",&a,&b,&c);
    s=a*0.2+b*0.3+c*0.5;
    printf("%.0lf",s);
    return 0;
}

