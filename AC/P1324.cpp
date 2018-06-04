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
ll n,m,x=1,y=1;
struct KFC{
    ll v;
    bool p;
}a[11000];
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I bool cmp(KFC a,KFC b){
    return a.v>b.v;
}
int main(){
    //in(t);out(t);
    _(n),_(m);
    for(R int i=1;i<n;++i)
        _(a[i].v),a[i].p=0;
    for(R int i=n;i<n+m-1;++i)
        _(a[i].v),a[i].p=1;
    sort(a+1,a+n+m-1,cmp);
    ll ans=0;
    for(R int i=1;i<=n+m-2;++i){
    	ans+=a[i].v*(a[i].p==0?x:y);
    	a[i].p==1?++x:++y;
    }
   	printf("%lld",ans);
    return 0;
}

