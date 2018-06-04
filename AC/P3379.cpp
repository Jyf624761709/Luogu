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
const int N=1000005;
int n,m,s,he[N],toe,hq[N],toq,ans[N],f[N];
bool vis[N];
struct KFC{
    int next,to;
}e[N];
struct QUE{
    int next,to,same,js;
    bool pd;
}que[N];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void add_e(int u,int v){
    e[++toe].next=he[u];
    e[toe].to=v;
    he[u]=toe;
    e[++toe].next=he[v];
    e[toe].to=u;
    he[v]=toe;
}
I void add_q(int u,int v,int j){
    que[++toq].next=hq[u];
    que[toq].to=v;
    que[toq].same=toq+1;
    que[toq].js=j;
    que[toq].pd=0;
    hq[u]=toq;
    que[++toq].next=hq[v];
    que[toq].to=u;
    que[toq].same=toq-1;
    que[toq].js=j;
    que[toq].pd=0;
    hq[v]=toq;
}
I int find(int x){
    if(f[x]!=x) f[x]=find(f[x]);
    return f[x];
}
I void _union(int x,int y){
    x=find(x),y=find(y);
    f[x]=y;
}
I void LCA(int x,int f){
    for(R int i=he[x];i;i=e[i].next){
        if(vis[e[i].to]||e[i].to==f) continue;
        LCA(e[i].to,x);
        _union(e[i].to,x);
        vis[e[i].to]=1;
    }
    for(R int i=hq[x];i;i=que[i].next){
        if(!que[i].pd&&vis[que[i].to]){
            ans[que[i].js]=find(que[i].to);
            que[i].pd=1;
            que[que[i].same].pd=1;
        }
    }
}
int main(){
    //in(t);out(t);
    int x,y;
    _(n),_(m),_(s);
    for(R int i=1;i<n;++i){
        _(x),_(y);
        add_e(x,y);
    }
    for(R int i=1;i<=n;++i)
        f[i]=i;
    for(R int i=1;i<=m;++i){
        _(x),_(y);
        add_q(x,y,i);
    }
    LCA(s,-1);
    for(R int i=1;i<=m;++i)
        printf("%d\n",ans[i]);
    return 0;
}

