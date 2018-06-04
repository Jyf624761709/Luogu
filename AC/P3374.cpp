#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<cmath>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
const int N=4000020;
ll n,m,ans[N],tag[N],aaa[N];
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I ll ls(ll p){
    return p<<1;
}
I ll rs(ll p){
    return p<<1|1;
}
I void tree_up(ll p){
    ans[p]=ans[ls(p)]+ans[rs(p)];
}
I void tree_down(ll p,ll l,ll r){
    ll mid=(l+r)>>1;
    tag[ls(p)]+=tag[p];
    ans[ls(p)]+=tag[p]*(mid-l+1);
    tag[rs(p)]+=tag[p];
    ans[rs(p)]+=tag[p]*(r-mid);
    tag[p]=0;
}
I void build(ll l,ll r,ll p){
    if(l==r){
        ans[p]=aaa[l];
        return;
    }
    ll mid=(l+r)>>1;
    build(l,mid,ls(p));
    build(mid+1,r,rs(p));
    tree_up(p);
}
I void update(ll p,ll k,ll l,ll r,ll nl,ll nr){
    if(nl<=l&&r<=nr){
        ans[p]+=(r-l+1)*k;
        tag[p]+=k;
        return;
    }
    tree_down(p,l,r);
    ll mid=(l+r)>>1;
    if(nl<=mid) update(ls(p),k,l,mid,nl,nr);
    if(nr>mid) update(rs(p),k,mid+1,r,nl,nr);
    tree_up(p);
}
I ll query(ll p,ll l,ll r,ll nl,ll nr){
    if(nl<=l&&r<=nr) return ans[p];
    ll sum=0;
    ll mid=(l+r)>>1;
    tree_down(p,l,r);
    if(nl<=mid) sum+=query(ls(p),l,mid,nl,nr);
    if(nr>mid) sum+=query(rs(p),mid+1,r,nl,nr);
    return sum;
}
int main(){
    //in();out();
    ll a,b,c,d;
    _(n),_(m);
    for(R int i=1;i<=n;++i) _(aaa[i]);
    build(1,n,1);
    for(R int i=0;i<m;++i){
    	_(a);
    	if(a&1){
    		_(b),_(d);
    		update(1,d,1,n,b,b);
    		continue;
        }
        _(b),_(c);
        printf("%lld\n",query(1,1,n,b,c));
    }
    return 0;
}

