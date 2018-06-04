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
int d,p,c,f,s,h[1005],dis[1005],tot;
bool vis[1005];
struct KFC{
    int next,to,w;
}e[1100];
I void add(int u,int g,int vv){
    e[++tot].next=h[u];
    e[tot].to=g;
    e[tot].w=vv;
    h[u]=tot;
}
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-48,c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void spfa();
int main(){
    //in(t);out(t);
    int a,b,o;
    _(d),_(p),_(c),_(f),_(s);
    for(R int i=1;i<=p;++i){
    	_(a),_(b);
    	add(a,b,0);
    }
    for(R int i=1;i<=f;++i){
    	_(a),_(b),_(o);
    	add(a,b,o);
    }
    spfa();
    int ans=ine;
    for(R int i=1;i<=c;++i)
        ans=mx(ans,dis[i]);
    printf("%d",ans);
    return 0;
}
queue<int> q;
int du[1005];
I void spfa(){
    q.push(s);
    dis[s]=d;
    vis[s]=1;
    du[s]=1;
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        vis[tmp]=0;
        for(R int i=h[tmp];i;i=e[i].next){
            if(dis[tmp]+d-e[i].w>dis[e[i].to]){
                dis[e[i].to]=dis[tmp]+d-e[i].w;
                if(!vis[e[i].to]){
                    ++du[e[i].to];
    			    if(du[e[i].to]>c){
 				        printf("-1");
                        exit(0);
                    }
                    vis[e[i].to]=1;
                    q.push(e[i].to);
                }
            }
        }
    }
}

