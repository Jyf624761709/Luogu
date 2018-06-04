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
typedef long long ll;
const int M=1000020;
int n,m,s,t,tot,h[M],cur[M],dep[M];
struct KFC{
    int next,to,w;
}e[M];
I void add(int u,int v,int d){
    e[++tot].next=h[u];
    h[u]=tot;
    e[tot].to=v;
    e[tot].w=d;
}
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int dfs(int now,int ff){
    if(now==t) return ff;
    for(R int& i=cur[now];i;i=e[i].next){
        if(dep[e[i].to]==dep[now]+1&&e[i].w!=0){
            ff=mn(ff,e[i].w);
            int d=dfs(e[i].to,ff);
            if(d>0){
                e[i].w-=d;
                e[i&1?i+1:i-1].w+=d;
                return d;
            }
        }
    }
}
I bool bfs(){
    queue<int> q;
    while(!q.empty()) q.pop();
    q.push(s);
    m(dep);
    dep[s]=1;
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        for(R int i=h[tmp];i;i=e[i].next){
            if(dep[e[i].to]==0&&e[i].w!=0){
                dep[e[i].to]=dep[tmp]+1;
                q.push(e[i].to);
            }
        }
    }
    if(dep[t]!=0) return true;
    else return false;
}
I void dinic(){
    int ans=0;
    while(bfs()){
        for(R int i=1;i<=n;++i) cur[i]=h[i];
        while(int d=dfs(s,inf))
            ans+=d;
    }
    printf("%d",ans);
}
int main(){
    //in(t);out(t);
    _(n),_(m),_(s),_(t);
    int u,v,d;
    for(R int i=1;i<=m;++i){
    	_(u),_(v),_(d);
    	add(u,v,d);
    	add(v,u,0);
    }
    dinic();
    return 0;
}

