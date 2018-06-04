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
const int N=30010,M=300010;
int n,m,h[N],tot,sum[3],ans;
bool p[N],col[N];
struct KFC{
    int next,to;
}e[M];
I void add(int u,int v){
    e[++tot].next=h[u];
    h[u]=tot;
    e[tot].to=v;
}
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void dfs(int x,bool c){
    if(p[x]){
        if(col[x]==c) return;
        puts("Impossible");
        exit(0);
    }
    p[x]=1;
    col[x]=c;
    ++sum[c];
    for(R int i=h[x];i;i=e[i].next)
        dfs(e[i].to,!c);
}
int main(){
    //in();out();
    int x,y;
    _(n),_(m);
    for(R int i=1;i<=m;++i){
        _(x),_(y);
        add(x,y);
        add(y,x);
    }
    for(R int i=1;i<=n;++i){
        if(p[i]) continue;
        sum[0]=sum[1]=0;
        dfs(i,0);
        ans+=mn(sum[0],sum[1]);
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

