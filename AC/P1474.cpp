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
typedef long long ll;
ll v,n,m[400010];
ll f[400010];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
int main(){
	/*in(t);
	  out(t);*/
	read(v);read(n);
	f[0]=1;
	for(register int i=1;i<=v;++i){
	    read(m[i]);
	    for(register int j=m[i];j<=n;++j)
	        f[j]+=f[j-m[i]];
	}
	cout<<f[n];
	return 0;
}


