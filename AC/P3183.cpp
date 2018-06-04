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
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,m,h[100010],tot,f[100010];
bool out[100010],in[100010];
struct KFC{
	int next,to;
}e[200010];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I void add(int f,int t){
	e[++tot].next=h[f];
	e[tot].to=t;
	h[f]=tot;
}
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int dfs(int s){
	if(!in[s]) return f[s]=1;
	if(f[s]) return f[s];
	for(R int i=h[s];i;i=e[i].next)
		f[s]+=dfs(e[i].to);
	return f[s];
}
int main(){
	//in(t);out(t);
	_(n);_(m);
	int x,y;
	for(R int i=1;i<=m;++i){
		_(x),_(y);
		add(y,x);
		out[x]=1;
		in[y]=1;
	}
	int ans=0;
	for(R int i=1;i<=n;++i)
		if(!out[i]&&in[i])
			ans+=dfs(i);
	printf("%d",ans);
	return 0;
}
