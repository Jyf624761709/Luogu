#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<cmath>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
int n,m,k,ans,tot,f[10010];
struct KFC{
    int f,t,v;
}e[10010];
I bool cmp(KFC a,KFC b){
    return a.v<b.v;
}
I int find(int x){
    if(f[x]!=x) f[x]=find(f[x]);
    return f[x];
}
I void un(int x,int y){
    x=find(x),y=find(y);
    if(x==y) return;
    f[x]=y;
}
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    _(n),_(m),_(k);
    for(R int i=1;i<=n;++i) f[i]=i;
    for(R int i=1;i<=m;++i)
        _(e[i].f),_(e[i].t),_(e[i].v);
    sort(e+1,e+1+m,cmp);
    for(R int i=1;i<=m;++i){
        e[i].f=find(e[i].f),e[i].t=find(e[i].t);
        if(e[i].f!=e[i].t){
            un(e[i].f,e[i].t);
            ans+=e[i].v;
            ++tot;
        }
        if(tot==n-k){
            printf("%d",ans);
            return 0;
        }
    }
    puts("No Answer");
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }

