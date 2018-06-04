#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,m,s,tot,head[1505],dis[1505];
bool vis[1505];
struct KFC{
    int to,next,v;
}e[50005];
I void add(int f,int t,int w){
    e[++tot].to=t;
    e[tot].next=head[f];
    e[tot].v=w;
    head[f]=tot;
}
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void spfa();
int main(){
    /*in();out();*/
    int f,g,w;
    rd(n);rd(m);s=1;
    for(R int i=1;i<=m;++i){
        rd(f);rd(g);rd(w);
        add(f,g,w);
    }
    for(R int i=1;i<=n;++i)
        dis[i]=ine;
    dis[s]=0;
    spfa();
    if(dis[n]!=ine)
        printf("%d",dis[n]);
    else
        puts("-1");
    return 0;
}
I void spfa(){
    int u,v;
    queue<int>q;
    q.push(s);
    vis[s]=1;
    dis[s]=0;
    while(!q.empty()){
        u=q.front();
        q.pop();
        vis[u]=0;
        for(R int i=head[u];i;i=e[i].next){
            v=e[i].to;
            if(dis[v]<dis[u]+e[i].v){
                dis[v]=dis[u]+e[i].v;
                if(!vis[v]){
                    q.push(v);
                    vis[v]=1;
                }
            }
        }
    }
}
