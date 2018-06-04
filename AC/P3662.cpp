#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<vector>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,k,b,a,f[100005],mi=inf;
bool p[100005];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
	/*in();out();*/
	rd(n);rd(k);rd(b);
	for(R int i=1;i<=b;++i){
		rd(a);
		p[a]=1;
	}
	for(R int i=1;i<=n;++i)
	    f[i]=f[i-1]+p[i];
	for(R int i=k;i<=n;++i)
	    mi=mn(mi,f[i]-f[i-k]);
	cout<<mi;
	return 0;
}

