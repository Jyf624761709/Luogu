#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
struct wo{
    int s,e;
}m[10005];
bool cmp(wo a,wo b){
    if(a.s==b.s) return a.e<b.e;
    return a.s<b.s;
}
int main(){
    int n,l,sy,ans=0;
    scanf("%d%d",&n,&l);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&m[i].s,&m[i].e);
    sort(m+1,m+1+n,cmp);
    sy=m[1].s;
    for(int i=1;i<=n;i++){
    	if(sy>m[i].e||(m[i].s>m[i].e))
    	    continue;
        if(sy>m[i].s)
            m[i].s=sy;
        ans+=(m[i].e-m[i].s)/l;
		if((m[i].e-m[i].s)%l>0){
		    ans++;
		    sy=m[i].e+l-(m[i].e-m[i].s)%l;
		}
    }
    printf("%d",ans);
    return 0;
}

