#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n;
double s,b,xi,yi,xj,yj,stx,sty;
I double as(double a){
    return a>=0.0?a:-1.0*a;
}
int main(){
    //in(t);out(t);
    scanf("%d%lf",&n,&b);
    scanf("%lf%lf",&stx,&sty);
    xi=stx,yi=sty;
    for(R int i=2;i<=n;++i){
    	scanf("%lf%lf",&xj,&yj);
    	s+=xi*yj-xj*yi;
    	xi=xj,yi=yj;
    }
    s+=xi*sty-yi*stx;
    printf("%.4lf",as(s)*0.5*b);
    return 0;
}

