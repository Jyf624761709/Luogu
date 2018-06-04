#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const double inf=2147483647.0;
const double ine=-2147482647.0;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,m,s,tot,head[12005],t;
double dis[12005];
bool vis[12005];
struct KFC{
    int to,next;
    double v;
}e[205005];
I void add(int f,int t,double w){
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
    int f,g;
    double w;
    rd(n);rd(m);
    for(R int i=1;i<=m;++i){
        scanf("%d%d%lf",&f,&g,&w);
        w/=100.0;w=1-w;
        add(f,g,w);
        add(g,f,w);
    }
    rd(s),rd(t);
    for(R int i=1;i<=n;++i)
        dis[i]=inf;
    dis[s]=100.0;
    spfa();
    printf("%.8lf ",dis[t]);
    return 0;
}
queue<int>q;
I void spfa(){
    int u,v;
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
        u=q.front();
        q.pop();
        vis[u]=0;
        for(R int i=head[u];i;i=e[i].next){
            v=e[i].to;
            if(dis[v]>dis[u]/e[i].v){
                dis[v]=dis[u]/e[i].v;
                if(!vis[v]){
                    q.push(v);
                    vis[v]=1;
                }
            }
        }
    }
}

