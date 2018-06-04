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
int n,a,b,c,d;
ll w[10009];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I ll mx(ll a,ll b){return a>b?a:b;}I ll mn(ll a,ll b){return a<b?a:b;}
int main(){
    //in(t);out(t);
    _(n);
    w[1]=1ll;
    a=b=c=d=1;
    for(R int i=2;i<=n;++i){
    	w[i]=mn(mn((w[a]*2ll),w[b]*3ll),mn(w[c]*5ll,w[d]*7ll));
    	if(w[i]==w[a]*2ll) ++a;
    	if(w[i]==w[b]*3ll) ++b;
    	if(w[i]==w[c]*5ll) ++c;
   		if(w[i]==w[d]*7ll) ++d;
    }
    printf("%lld",w[n]);
    return 0;
}
 
