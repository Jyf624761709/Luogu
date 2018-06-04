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
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
ll n,m,a[800010],ans[800010],tag[800010];
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void tree_up(ll p){
    ans[p]=ans[ls(p)]+ans[rs(p)];
}
I void tree_down(ll p,ll l,ll r){
    if(tag[p]==0) return;
    ll mid=(l+r)>>1;
    tag[ls(p)]+=tag[p];
    ans[ls(p)]+=tag[p]*(mid-l+1);
    tag[rs(p)]+=tag[p];
    ans[rs(p)]+=tag[p]*(r-mid);
    tag[p]=0;
}
I void build(int p,int l,int r){
    if(l==r){
        ans[p]=a[l];
        return;
    }
    ll mid=(l+r)>>1;
    build(ls(p),l,mid);
    build(rs(p),mid+1,r);
    tree_up(p);
}
I void update(ll p,ll l,ll r,ll nl,ll nr,ll x){
    if(nr<l||r<nl) return;
    if(nl<=l&&r<=nr){
        ans[p]+=x*(r-l+1);
        tag[p]+=x;
        return;
    }
    tree_down(p,l,r);
    ll mid=(l+r)>>1;
    update(ls(p),l,mid,nl,nr,x);
    update(rs(p),mid+1,r,nl,nr,x);
    tree_up(p);
}
I ll query(ll p,ll l,ll r,ll nl,ll nr){
    if(nr<l||r<nl) return 0;
    if(nl<=l&&r<=nr)
        return ans[p];
    tree_down(p,l,r);
    ll mid=(l+r)>>1;
    return query(ls(p),l,mid,nl,nr)+query(rs(p),mid+1,r,nl,nr);
}
int main(){
    //in();out();
    int k,x,y,z;
    _(n),_(m);
    for(R int i=1;i<=n;++i) _(a[i]);
    build(1,1,n);
    while(m--){
    	_(k);
    	if(k==1){
    		_(x),_(y),_(z);
    		update(1,1,n,x,y,z);
        }
        else
           if(k==2){
    			_(x);
    			update(1,1,n,1,1,x);
            }
        else
           if(k==3){
    			_(x);
    			update(1,1,n,1,1,-x);
            }
        else
            if(k==4){
                _(x),_(y);
                printf("%lld\n",query(1,1,n,x,y));
            }
        else
            if(k==5){
                printf("%lld\n",query(1,1,n,1,1));
            }
    }
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }

