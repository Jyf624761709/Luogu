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
int n,a,h[10010],tot,fa[10010],ans;
bool vis[10010];
struct KFC{
    int next,to,dep;
}e[10010];
struct cmp{
    I bool operator()(const int &a,const int &b){
        return e[a].dep<e[b].dep;
    }
};
priority_queue<int,vector<int>,cmp> q;
I void add(int u,int v){
    e[++tot].to=v;
    e[tot].next=h[u];
    h[u]=tot;
}
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void dfs(int x,int d){
    e[x].dep=d;
    for(R int i=h[x];i;i=e[i].next){
        if(fa[x]==e[i].to) continue;
        fa[e[i].to]=x;
        dfs(e[i].to,d+1);
    }
}
I void dfss(int x,int d){
    if(d>2) return;
    vis[x]=1;
    for(R int i=h[x];i;i=e[i].next){
        //if(fa[x]==e[i].to) continue;
        dfss(e[i].to,d+1);
    }
}
int main(){
    //in();out();
    _(n);
    for(R int i=2;i<=n;++i){
    	_(a);
    	add(a,i);
    	add(i,a);
    }
    dfs(1,0);
    for(R int i=1;i<=n;++i) q.push(i);
    while(!q.empty()){
        while(!q.empty()&&vis[q.top()]) q.pop();
        if(q.empty()) break;
        int tmp=q.top();
        if(fa[fa[tmp]]) dfss(fa[fa[tmp]],0);
        else dfss(1,0);
        ++ans;
        q.pop();
    }
    printf("%d",ans);
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

