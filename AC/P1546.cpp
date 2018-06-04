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
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,f[1005],tot,k,ans;
struct KFC{
    int s,e,w;
}e[100005];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int _find(int x){
    if(f[x]!=x) f[x]=_find(f[x]);
    return f[x];
}
I void _union(int a,int b){
    a=_find(a),b=_find(b);
    f[a]=b;
}
I bool cmp(KFC a,KFC b){
    return a.w<b.w;
}
int main(){
    //in(t);out(t);
    int v;
    _(n);
    for(R int i=1;i<=n;++i)
        f[i]=i;
    for(R int i=1;i<=n;++i)
        for(R int j=1;j<=n;++j){
            _(v);
            if(i==j) continue;
            e[++tot].s=i;
            e[tot].e=j;
            e[tot].w=v;
        }
    sort(e+1,e+1+tot,cmp);
    for(R int i=1;i<=tot;++i){
        if(_find(e[i].s)==_find(e[i].e)) continue;
        _union(e[i].s,e[i].e);
        ans+=e[i].w;
        ++k;
        if(k==n-1)
            break;
    }
    if(k<n-1) printf("-1");
    else printf("%d",ans);
    return 0;
}

