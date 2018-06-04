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
int n,m,d,a,b,h[100005],tot,dis[105];
bool p[105][105],vis[105];
struct KFC{
    int next,to,v;
}e[100005];
I void add(int i,int j,int w){
    e[++tot].next=h[i];
    e[tot].to=j;
    e[tot].v=w;
    h[i]=tot;
}
struct Heap{
    int u,s;
};
struct cmp{
    I bool operator()(const Heap &a,const Heap &b){
        return a.s>b.s;
    }
};
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void dijskra(){
    priority_queue<Heap,vector<Heap>,cmp> q;
    for(R int i=1;i<=n;++i)
        dis[i]=inf;
    dis[a]=0;
    Heap tmp;
    q.push((Heap){a,0});
    while(!q.empty()){
        tmp=q.top();
        q.pop();
        if(vis[tmp.u])
            continue;
        vis[tmp.u]=1;
        for(R int i=h[tmp.u];i;i=e[i].next){
            if(!p[tmp.u][e[i].to])
                e[i].v=0;
            if(dis[e[i].to]>dis[tmp.u]+e[i].v){
                dis[e[i].to]=dis[tmp.u]+e[i].v;
                q.push((Heap){e[i].to,dis[e[i].to]});
            }
        }
    }
}
int main(){
    //in(t);out(t);
    int r,z,o;
    _(n);_(m);
    for(R int i=1;i<=m;++i){
        _(r),_(z),_(o);
        add(r,z,o);
        add(z,r,o);
    }
    _(d);
    for(R int i=1;i<=d;++i){
        _(r);_(z);
        p[r][z]=1;
        p[z][r]=1;
    }
    _(a),_(b);
    dijskra();
    printf("%d",dis[b]);
    return 0;
}

