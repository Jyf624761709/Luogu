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
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
ll n,m,c[500050];
I void add(int x,ll k){
	while(x<=n){
		c[x]+=k;
		x+=lb(x);
	}
} 
I ll sum(int x){
	ll ans=0;
	while(x!=0){
		ans+=c[x];
		x-=lb(x);
	}
	return ans;
}
int main(){
    //in();out();
	ll a,la=0,k,t,x,y;
    _(n),_(m);
    for(R int i=1;i<=n;++i){
        _(a);
        add(i,a-la);
        la=a;
	}
	while(m--){
		_(t);
		if(t==1){
			_(x),_(y),_(k);
			add(x,k);
			add(y+1,-k);
			continue;
		}
		_(x);
		printf("%lld\n",sum(x));
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

