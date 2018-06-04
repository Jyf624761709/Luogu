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
const int N=200010;
int t,n,m,a,b,w,h[N],dis[N];
bool vis[N],flag=0;
struct KFC{
    int next,to,v;
}e[N<<1];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int tot;
I void add(int f,int t,int k){
    e[++tot].next=h[f];
    e[tot].to=t;
    e[tot].v=k;
    h[f]=tot;
}
I void spfa(int s);
int main(){
    //in(t);out(t);
    int x,y,z;
    _(t);
    while(t--){
        _(n),_(m);
        for(R int i=1;i<=n;++i){
            vis[i]=0;
            dis[i]=0;
        }
        for(R int i=1;i<=m;++i)
            h[i]=0;
        flag=0;
        for(R int i=1;i<=m;++i){
            _(x),_(y),_(z);
            add(x,y,z);
            if(z>=0) add(y,x,z);
        }
        for(R int i=1;i<=n;++i){
            spfa(i);
            if(flag){
                puts("YE5");
                break;
            }
        }
        if(!flag)
            puts("N0");
    }
    return 0;
}
I void spfa(int s){
    vis[s]=1;
    for(R int i=h[s];i;i=e[i].next){
        if(dis[s]+e[i].v<dis[e[i].to]){
            dis[e[i].to]=dis[s]+e[i].v;
            if(vis[e[i].to]||flag){
                flag=1;
                break;
            }
            spfa(e[i].to);
        }
    }
    vis[s]=0;
}
