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
int n,fa[1000010],ans,a;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int fd(int f){
    if(fa[f]!=f) fa[f]=fd(fa[f]);
    return fa[f];
}
I void un(int x,int y){
    fa[fd(x)]=fd(y);
}
int main(){
    //in(t);out(t);
    _(n);
    for(R int i=1;i<=n;++i) fa[i]=i;
    for(R int i=1;i<=n;++i){
        _(a);
        un(i,a);
    }
    for(R int i=1;i<=n;++i)
    	ans+=fa[i]==i;
    printf("%d",ans);
    return 0;
}

