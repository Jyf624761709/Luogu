#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<cmath>
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
const ll inf=2333333333ll;
const int N=1000100;
bool vis[N];
int n,m,h[N],h1[N],tot;
ll ans,dis[N];
struct KFC{
    int next,to;
    ll v;
}e[N],e1[N];
I void add(int u,int v,ll w){
    e[++tot].next=h[u];
    e[tot].to=v;
    e[tot].v=w;
    h[u]=tot;
    e1[tot].next=h1[v];
    e1[tot].to=u;
    e1[tot].v=w;
    h1[v]=tot;
}
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void spfa();
I void spfa1();
int main(){
    //in();out();
    int x,y;
    ll z;
    _(n),_(m);
    for(R int i=1;i<=m;++i){
        _(x),_(y),_(z);
        add(x,y,z);
    }
    spfa();
    for(R int i=1;i<=n;++i) ans+=dis[i];
    spfa1();
    for(R int i=1;i<=n;++i) ans+=dis[i];
    printf("%lld",ans);
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1ll, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
  deque<int> q;
  I void spfa(){
      for(R int i=1;i<=n;++i) dis[i]=inf;
      dis[1]=0;
      vis[1]=1;
      q.push_back(1);
      while(!q.empty()){
          int u=q.front();
          q.pop_front();
          vis[u]=0;
          for(R int i=h[u];i;i=e[i].next){
              if(dis[u]+e[i].v<dis[e[i].to]){
                  dis[e[i].to]=dis[u]+e[i].v;
                  if(!vis[e[i].to]){
                      vis[e[i].to]=1;
                      if(q.empty()||dis[e[i].to]<dis[q.front()])
                          q.push_front(e[i].to);
                      else
                          q.push_back(e[i].to);
                  }
              }
          }
     }
}
I void spfa1(){
    for(R int i=1;i<=n;++i) dis[i]=inf,vis[i]=0;
    dis[1]=0;
    vis[1]=1;
    q.push_back(1);
    while(!q.empty()){
        int u=q.front();
        q.pop_front();
        vis[u]=0;
        for(R int i=h1[u];i;i=e1[i].next){
            if(dis[u]+e1[i].v<dis[e1[i].to]){
                dis[e1[i].to]=dis[u]+e1[i].v;
                if(!vis[e1[i].to]){
                    vis[e1[i].to]=1;
                    if(q.empty()||dis[e1[i].to]<dis[q.front()])
                        q.push_front(e1[i].to);
                    else
                        q.push_back(e1[i].to);
                }
            }
        }
   }
}

