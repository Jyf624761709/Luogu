#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define I inline
#define R register
char ss[1<<17],*A=ss,*B=ss;
I char gc(){return A==B&&(B=(A=ss)+fread(ss,1,1<<17,stdin),A==B)?EOF:*A++;}
template <typename _Tp> I void _(_Tp &x);
I int mn(int a,int b){return a<b?a:b;}
int n,m,h[100010],tot,dfn[100010],low[100010],cnt;
bool sd[200010];
struct KFC{
    int next,to;
}e[200100];
I void add(int u,int w){
    e[++tot].next=h[u];
    e[tot].to=w;
    h[u]=tot;
}
I void tarjan(int u,int fa){
    int c=0;
    dfn[u]=low[u]=++cnt;
    for(R int i=h[u];i;i=e[i].next){
        if(!dfn[e[i].to]){
            tarjan(e[i].to,u);
            low[u]=mn(low[u],low[e[i].to]);
            if(u==fa) ++c; 
            if(low[e[i].to]>=dfn[u]&&u!=fa) sd[u]=1;
        } 
        low[u]=mn(low[u],dfn[e[i].to]);
    }
    if(c>=2) sd[u]=1;
}
int main(){
    int x,y,ans=0;
    _(n),_(m);
    while(m--){
        _(x),_(y);
        add(x,y);
        add(y,x);
    }
    for(R int i=1;i<=n;++i) if(dfn[i]==0) tarjan(i,i);
    for(R int i=1;i<=n;++i) ans+=sd[i];
    printf("%d\n",ans);
    for(R int i=1;i<=n;++i) if(sd[i]) printf("%d ",i);
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=gc();
      if (c=='-') w=-1, c=gc();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=gc();
      x*=w;
  }

