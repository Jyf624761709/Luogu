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
int n,m,f[5005],ans,k;
struct KFC{
	int s,e,w;
}t[200005];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I bool cmp(KFC a,KFC b){
	return a.w<b.w;
}
I int _find(int x){
	if(f[x]!=x) f[x]=_find(f[x]);
	return f[x];
}
I void _union(int a,int b){
	a=_find(a),b=_find(b);
	f[a]=b;
}
int main(){
	/*in();out();*/
	_(n);_(m);
	for(R int i=1;i<=n;++i)
	    f[i]=i;
	for(R int i=1;i<=m;++i)
		_(t[i].s),_(t[i].e),_(t[i].w);
	sort(t+1,t+1+m,cmp);
	for(R int i=1;i<=m;++i){
		if(_find(t[i].s)==_find(t[i].e)) continue;
		_union(_find(t[i].s),_find(t[i].e));
		++k;
		if(k==n-1){
			ans=t[i].w;
			break;
		}
	}
	if(k<n-1)
	    printf("-1");
	else
	    printf("%d %d",k,ans);
	return 0;
}
