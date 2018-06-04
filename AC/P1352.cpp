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
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,f[3][6006],h[6006],tot;
struct KFC{
    int next,to;
}e[6006];
I void add(int u,int v){
    e[++tot].next=h[u];
    h[u]=tot;
    e[tot].to=v;
}
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void dfs(int now){
    for(R int i=h[now];i;i=e[i].next){
        dfs(e[i].to);
        f[1][now]=mx(mx(f[0][e[i].to],f[1][now]+f[0][e[i].to]),f[1][now]);
        f[0][now]=mx(mx(f[0][now],f[0][now]+f[1][e[i].to]),mx(f[1][e[i].to],f[0][e[i].to]));
    }
}
int main(){
    //in();out();
    int kkk,yyy,id;
    bool p[6006]={0};
   _(n);
    for(R int i=1;i<=n;++i) _(f[1][i]);
    for(R int i=1;i<=n;++i) _(kkk),_(yyy),add(yyy,kkk),p[kkk]=1;
    for(R int i=1;i<=n;++i) if(!p[i]){id=i;break;}
    dfs(id);
    printf("%d",mx(f[1][id],f[0][id]));
    return 0;
}

