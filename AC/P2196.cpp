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
#define m(a) memset(a,-1,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int n,a[210],h[205],tot,t,dis[205],ans[205],l,ooo;
bool vis[210];
struct KFC{
    int next,to,v;
}e[1050];
I void add(int u,int v,int d){
    e[++tot].next=h[u];
    h[u]=tot;
    e[tot].v=d;
    e[tot].to=v;
}
I void dfs(int tmp,int k[],int js){
    if(h[tmp]==0){
        if(dis[tmp]<ooo) return;
        k[js]=tmp;
        l=js;
        for(R int i=1;i<=js;++i) ans[i]=k[i];
        ooo=mx(ooo,dis[tmp]);
        return;
    }
    vis[tmp]=1;
    for(R int i=h[tmp];i;i=e[i].next){
        if(vis[e[i].to]) continue;
        if(dis[tmp]+e[i].v>dis[e[i].to]){
            dis[e[i].to]=dis[tmp]+e[i].v;
            k[js]=tmp;
            dfs(e[i].to,k,js+1);
        }
    }
    vis[tmp]=0;
}
int o[10000];
int main(){
    //in();out();
    _(n);
    m(dis);
    for(R int i=1;i<=n;++i) _(a[i]);
    for(R int i=1;i<n;++i)
        for(R int j=i+1;j<=n;++j){
        	_(t);
        	if(t) add(i,j,a[j]);
        }
    dis[1]=a[1];
    for(R int i=1;i<n;++i){
        m(dis);
        dis[i]=a[i];
        dfs(i,o,1);
    }
    for(R int i=1;i<=l;++i) printf("%d ",ans[i]);
    printf("\n%d",ooo);
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

