#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<cmath>
const int iAnf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen(".in","r",stdin)
#define out() freopen(".out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
#define gc() getchar()
typedef long long ll;
ll n,m,k,a[50010];
ll x=1,y,ans,p[500010],s[50010];
struct KFC{
    ll l,r,id,b;
    friend bool operator < (const KFC &a,const KFC &b){
        return a.b!=b.b ? a.l<b.l : a.b&1 ? a.r<b.r : a.r>b.r;
    }
}c[50010];
/*char ss[1<<17],*A=ss,*B=ss;
I char gc(){return A==B&&(B=(A=ss)+fread(ss,1,1<<17,stdin),A==B)?EOF:*A++;}*/
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    _(n),_(m),_(k);
    ll bl=sqrt(n);
    for(R int i=1;i<=n;++i) _(a[i]);
    for(R int i=1;i<=m;++i) _(c[i].l),_(c[i].r),c[i].id=i,c[i].b=(c[i].l-1)/bl+1;
    sort(c+1,c+1+m);
    for(R int i=1;i<=m;++i){
        while(y<c[i].r) ans+=(++p[a[++y]]<<1)-1;
        while(y>c[i].r) ans-=--p[a[y--]]<<1|1;
        while(x<c[i].l) ans-=--p[a[x++]]<<1|1;
        while(x>c[i].l) ans+=(++p[a[--x]]<<1)-1;
        s[c[i].id]=ans;
    }
    for(R int i=1;i<=m;++i) printf("%lld\n",s[i]);
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=gc();
      if (c=='-') w=-1ll, c=gc();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=gc();
      x*=w;
  }
