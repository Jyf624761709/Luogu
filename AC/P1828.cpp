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
int n,y,c,s[2000],u[2000],dis[2000],tot,ans=inf;
bool p[2000];
struct KFC{
    int next,v,w;
}e[2000];
I void add(int from,int to,int how){
    e[++tot].next=u[from];
    e[tot].v=to;
    e[tot].w=how;
    u[from]=tot;
}
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void spfa(int x){
    queue<int> q;
    q.push(x);
    p[x]=1;
    while(!q.empty()){
        int t=q.front();
        q.pop();
        p[t]=0;
        for(R int i=u[t];i;i=e[i].next){
            if(dis[e[i].v]>dis[t]+e[i].w){
                dis[e[i].v]=dis[t]+e[i].w;
                if(!p[e[i].v]){
                    q.push(e[i].v);
                    p[e[i].v]=1;
                }
            }
        }
    }
}
int main(){
    /*in();out();*/
    int __,___,____;
    _(n);_(y),_(c);
    for(R int i=1;i<=n;++i)
        _(s[i]);
    for(R int i=1;i<=c;++i){
        _(__),_(___),_(____);
        add(__,___,____);
        add(___,__,____);
    }
    int sum=0;
    for(R int i=1;i<=y;++i){
        for(R int j=1;j<=y;++j)
            dis[j]=inf;
        m(p);
        dis[i]=0;
        spfa(i);
    	sum=0;
        for(R int j=1;j<=n;++j)
            sum+=dis[s[j]];
        ans=mn(ans,sum);
    }
    printf("%d",ans);
    return 0;
}

