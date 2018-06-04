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
int n,k,m,s,t,c[109],aa,bb,h[110],tot,dis[105],vis[105];
bool p[105][105];
bool flag[110];
struct KFC{
    int next,to,v;
}e[10010];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void add(int u,int o,int d){
    e[++tot].next=h[u];
    e[tot].to=o;
    e[tot].v=d;
    h[u]=tot;
}
I bool judge(int f){
    if(flag[c[f]]||vis[f]) return false;
    for(R int i=1;i<=n;++i)
        if(flag[c[i]]&&(p[c[f]][i]||p[c[t]][c[f]]||p[c[t]][i]))
            return false;
    return true;
}
I void spfa(int now);
int main(){
    //in(t);out(t);
    int u,v,d;
    _(n),_(k),_(m),_(s),_(t);
    for(R int i=1;i<=n;++i){
        _(c[i]);
        dis[i]=inf;
    }
    dis[s]=0;
    for(R int i=1;i<=k;++i)
        for(R int j=1;j<=k;++j)
            _(bb),p[i][j]=bb;
    for(R int i=1;i<=m;++i){
        _(u),_(v),_(d);
        add(u,v,d);
        add(v,u,d);
    }
    spfa(s);
    if(dis[t]==inf) puts("-1");
    else printf("%d",dis[t]);
    return 0;
}
I void spfa(int now){
    vis[now]=1;
    flag[c[now]]=1;
    for(R int i=h[now];i;i=e[i].next){
        if(dis[e[i].to]>e[i].v+dis[now]){
            if(judge(e[i].to)){
                dis[e[i].to]=e[i].v+dis[now];
                spfa(e[i].to);
            }
        }
    }
    vis[now]=0;
    flag[c[now]]=0;
}

