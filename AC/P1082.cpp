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
ll n,p,x,y;
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void gcd(ll a,ll b,ll &x,ll &y){
	if(b==0){
	    x=1,y=0;
		return;
	}
	gcd(b,a%b,y,x);
	y-=a/b*x;
}
int main(){
    //in(t);out(t);
    _(n),_(p);
    gcd(n,p,x,y);
    printf("%lld",(x%p+p)%p);
    return 0;
}

