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
int n,m,h[10005],vis[10005],dis[10005],cnt[10005],tot;
struct KFC{
    int next,to,w;
}e[10005];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void add(int u,int v,int d){
    e[++tot].next=h[u];
    e[tot].to=v;
    e[tot].w=d;
    h[u]=tot;
}
queue<int> q;
I void spfa(int s){
    q.push(s);
    vis[s]=1;
    cnt[s]=1;
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        vis[tmp]=0;
        for(R int i=h[tmp];i;i=e[i].next){
            if(dis[tmp]+e[i].w<dis[e[i].to]){
                dis[e[i].to]=dis[tmp]+e[i].w;
                if(!vis[e[i].to]){
                    q.push(e[i].to);
                    vis[e[i].to]=1;
                    ++cnt[e[i].to];
                    if(cnt[e[i].to]>n){
                        printf("Forever love");
                        exit(0);
                    }
                }
            }
        }
    }
}
int main(){
    //in(t);out(t);
    int aa,bb,cc;
    _(n),_(m);
    for(R int i=1;i<=m;++i)
        _(aa),_(bb),_(cc),add(aa,bb,-cc);
    for(R int i=1;i<=n;++i)
        dis[i]=inf;
    dis[1]=0;
    spfa(1);
    int ans=dis[n];
    for(R int i=1;i<=n;++i)
        dis[i]=inf,cnt[i]=0,vis[i]=0;
    dis[n]=0;
    spfa(n);
    printf("%d",mn(ans,dis[1]));
    return 0;
}

