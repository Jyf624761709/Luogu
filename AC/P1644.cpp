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
int n,m,fx[5]={-2,-1,1,2},fy[5]={1,2,2,1},f[20][20];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void dfs(int x,int y){
    ++f[x][y];
    if(x==n&&y==m) return;
    for(R int i=0;i<4;++i){
        int xx=x+fx[i],yy=y+fy[i];
        if(xx<0||xx>n||yy<0||yy>m) continue;
        dfs(xx,yy);
    }
}
int main(){
    //in(t);out(t);
    _(n);_(m);
    dfs(0,0);
    printf("%d",f[n][m]);
    return 0;
}

