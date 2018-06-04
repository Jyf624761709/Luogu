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
int n,m,t,s,e,h,a,b;
ll f[305][305];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I ll mx(ll a,ll b){return a>b?a:b;}I ll mn(ll a,ll b){return a<b?a:b;}
int main(){
	/*in();out();*/
	_(n);_(m);_(t);
	for(R int i=1;i<=n;++i)
	    for(R int j=1;j<=n;++j)
	        f[i][j]=inf;
	for(R int i=1;i<=m;++i){
		_(s);_(e);_(h);
		f[s][e]=h;
	}
	for(R int k=1;k<=n;++k)
	    for(R int i=1;i<=n;++i){
	        for(R int j=1;j<=n;++j){
	            f[i][j]=mn(f[i][j],mx(f[i][k],f[k][j]));
	        }
	    }
	for(R int i=1;i<=t;++i){
		_(a);_(b);
		if(f[a][b]==inf){
			printf("-1\n");
			continue;
		}
		printf("%lld\n",f[a][b]);
	}
	return 0;
}

