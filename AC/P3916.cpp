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
#define m(a) memset(a,-127,sizeof(a))
#define I inline
#define R register
typedef long long ll;
const int N=100010;
int n,m,dis[N],tot,h[N];
bool p[N];
struct KFC{
    int next,to;
}e[N];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void add(int u,int v){
    e[++tot].next=h[u];
    e[tot].to=v;
    h[u]=tot;
}
I void dfs(int now){
    p[now]=1;
    for(R int i=h[now];i;i=e[i].next){
        if(p[e[i].to]) continue;
        dis[e[i].to]=dis[now];
        dfs(e[i].to);
    }
}
int main(){
    //in(t);out(t);
    int kkk,yyy;
    _(n),_(m);
    for(R int i=1;i<=m;++i){
    	_(kkk),_(yyy);
    	add(yyy,kkk);
    }
    for(R int i=n;i>0;--i)
        if(!p[i]) dis[i]=i,dfs(i);
    for(R int i=1;i<=n;++i)
        printf("%d ",dis[i]);
    return 0;
}

