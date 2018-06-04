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
int n,m,f[1005],k,ans;
struct KFC{
    int s,e,w;
}t[100005];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int _f(int x){
	if(f[x]!=x) f[x]=_f(f[x]);
	return f[x];
}
I void _union(int a,int b){
	a=_f(a),b=_f(b);
	f[a]=b;
}
I bool cmp(KFC a,KFC b){
	return a.w<b.w;
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
    	if(_f(t[i].s)==_f(t[i].e))
    	    continue;
    	ans=t[i].w;
    	++k;
    	_union(t[i].s,t[i].e);
    	if(k==n-1) break;
    }
    if(k==n-1) printf("%d",ans);
    else printf("-1");
    return 0;
}

