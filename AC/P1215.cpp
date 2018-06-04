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
#define m(a) memset(a,-1,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int a,b,c;
bool f[110][110],p[105];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}
I int mn(int a,int b){return a<b?a:b;}
I void dfs(int x,int y){
    if(f[x][y]) return;
    f[x][y]=1;
    int z=c-x-y;
    if(x==0)
        p[z]=1;
    dfs(x-mn(x,b-y),y+mn(x,b-y));
    dfs(x+mn(y,a-x),y-mn(y,a-x));
    dfs(x-mn(x,c-z),y);
    dfs(x+mn(z,a-x),y);
    dfs(x,y-mn(y,c-z));
    dfs(x,y+mn(z,b-y));
}
int main(){
    //in();out();
    _(a),_(b),_(c);
    dfs(0,0);
    for(R int i=0;i<=c;++i) 
        if(p[i]) 
            printf("%d ",i);
    return 0;
}

