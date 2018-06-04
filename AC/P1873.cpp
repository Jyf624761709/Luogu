#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
//inline
//register
typedef long long ll;
int n;
ll m,h[1000005];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline ll mx(ll a,ll b){
	return a>b?a:b;
}
inline bool check(ll f){
	ll ans=0,t;
	for(register int i=1;i<=n;++i){
		t=h[i]-f;
		if(t<0)
		    t=0;
	    ans+=t;
	}
	return ans>=m;
}
int main(){
	/*in(t);
	  out(t);*/
	ll l=0,r=ine,mid;
	read(n);read(m);
	for(register int i=1;i<=n;++i){
	    read(h[i]);
	    r=mx(r,h[i]);
	}
	while(1){
		if(l+1==r)
		    break;
		mid=(l+r)>>1;
		if(check(mid))
		    l=mid;
		else
		    r=mid;
	}
	if(check(r))
	    printf("%lld",r);
	else
	    printf("%lld",l);
	return 0;
}


