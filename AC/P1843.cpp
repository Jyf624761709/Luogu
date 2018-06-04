#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXN=2147483647;
const int MINN=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
//inline 
typedef long long ll;
int n,a,b;
ll c[500005];
inline bool check(ll f){
    ll ans=0,t=f*a,tt;
    for(register int i=1;i<=n;i++){
        tt=c[i]-t;
        if(tt>0){
            ans+=tt/b;
            if(tt%b>0) ++ans;
        }
    }
    return ans<=f;
}
int main(){
    /*in(t);
      out(t);*/
    ll l=1,r=0,mid;
    scanf("%d%d%d",&n,&a,&b);
    for(register int i=1;i<=n;i++){
        scanf("%lld",&c[i]);
        r+=c[i];
    }
    while(1){
        if(l+1==r)
            break;
        mid=(l+r)>>1;
        if(check(mid)==true)
            r=mid;
        else
            l=mid;
    }
    if(check(l)==true)
        printf("%lld",l);
    else
        printf("%lld",r);
    return 0;
}

