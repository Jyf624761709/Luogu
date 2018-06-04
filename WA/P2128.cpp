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
int n,m,v[455],js;
bool p[455];
struct st{
	int w[455],s;
}b[455];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline int mx(int a,int b){
	return a>b?a:b;
}
void dfs(int f){
	js+=v[f];
	p[f]=1;
	for(register int i=1;i<=b[f].s;++i)
	    if(!p[b[f].w[i]])
	        dfs(b[f].w[i]);
}
int main(){
	/*in(t);
	  out(t);*/
	read(n);read(m);
	for(register int i=1;i<=n;++i){
	   read(v[i]);
	   b[i].s=0;
	}
	int a,u;
	for(register int i=1;i<=m;++i){
		read(a);read(u);
		b[a].w[b[a].s+1]=u;
		++b[a].s;
		b[u].w[b[u].s+1]=a;
		++b[u].s;
	}
	int ans=ine;
	for(register int i=1;i<=n;++i){
		m(p);js=0;
		dfs(i);
		ans=mx(ans,js);
	}/**/
	printf("%d\n",ans);
	return 0;
}


