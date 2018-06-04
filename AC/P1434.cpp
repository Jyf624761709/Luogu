#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,-1,sizeof(a))
//inline
//register
typedef long long ll;
int n,m,f[102][102],h[102][102],ans=ine;
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline void d(){
    for(register int i=0;i<=m+1;++i){
        h[0][i]=inf;
        h[n+1][i]=inf;
    }
    for(register int i=0;i<=n+1;++i){
        h[i][0]=inf;
        h[i][m+1]=inf;
    }
}
inline int mx(int a,int b){
    return a>b?a:b;
}
void dfs(int i,int j,int js){
    if(f[i][j]>=js)
        return;
    f[i][j]=js;
    if(h[i+1][j]>=h[i][j]&&h[i][j+1]>=h[i][j]&&h[i-1][j]>=h[i][j]&&h[i][j-1]>=h[i][j]){
        ans=mx(ans,js);
        return;
    }
    if(h[i-1][j]<h[i][j])
        dfs(i-1,j,js+1);
    if(h[i][j-1]<h[i][j])
        dfs(i,j-1,js+1);
    if(h[i][j+1]<h[i][j])
        dfs(i,j+1,js+1);
    if(h[i+1][j]<h[i][j])
       dfs(i+1,j,js+1);
}
int main(){
    /*in(t);
      out(t);*/
    m(f);
    read(n);read(m);
    d();
    for(register int i=1;i<=n;++i)
        for(register int j=1;j<=m;++j)
            read(h[i][j]);
    for(register int i=1;i<=n;++i)
        for(register int j=1;j<=m;++j)
            if((h[i+1][j]<=h[i][j]||i==n)&&(h[i][j+1]<=h[i][j]||j==m)&&(h[i-1][j]<=h[i][j]||i==1)&&(h[i][j-1]<=h[i][j]||j==1))
                dfs(i,j,1);	
    cout<<ans;
    return 0;
}

