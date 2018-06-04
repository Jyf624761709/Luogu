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
#define me(a) memset(a,-1,sizeof(a))
//inline
//register
typedef long long ll;
int m,n,mp[102][102],f[102][102];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
void dfs(int i,int j,int k,bool ok){
    f[i][j]=k;
    if(i==m&&j==m)
        return;
    int t=mp[i][j];
    if(i-1>0){
        if(mp[i-1][j]==t)
            if(f[i-1][j]>k)
                dfs(i-1,j,k,1);
        if(mp[i-1][j]!=-1&&mp[i-1][j]!=t)
            if(f[i-1][j]>k+1)
                dfs(i-1,j,k+1,1);
        if(mp[i-1][j]==-1&&ok)
            if(f[i-1][j]>k+2){
            	mp[i-1][j]=t;
                dfs(i-1,j,k+2,0);
            	mp[i-1][j]=-1;
            }
    }
    if(j-1>0){
        if(mp[i][j-1]==t)
            if(f[i][j-1]>k)
                dfs(i,j-1,k,1);
        if(mp[i][j-1]!=-1&&mp[i][j-1]!=t)
            if(f[i][j-1]>k+1)
                dfs(i,j-1,k+1,1);
        if(mp[i][j-1]==-1&&ok)
            if(f[i][j-1]>k+2){
            	mp[i][j-1]=t;
                dfs(i,j-1,k+2,0);
            	mp[i][j-1]=-1;
            }
    }
    if(j+1<=m){
        if(mp[i][j+1]==t)
            if(f[i][j+1]>k)
                dfs(i,j+1,k,1);
        if(mp[i][j+1]!=-1&&mp[i][j+1]!=t)
            if(f[i][j+1]>k+1)
                dfs(i,j+1,k+1,1);
        if(mp[i][j+1]==-1&&ok)
            if(f[i][j+1]>k+2){
            	mp[i][j+1]=t;
                dfs(i,j+1,k+2,0);
            	mp[i][j+1]=-1;
            }
    }
    if(i+1<=m){
        if(mp[i+1][j]==t)
            if(f[i+1][j]>k)
                dfs(i+1,j,k,1);
        if(mp[i+1][j]!=-1&&mp[i+1][j]!=t)
            if(f[i+1][j]>k+1)
                dfs(i+1,j,k+1,1);
        if(mp[i+1][j]==-1&&ok)
            if(f[i+1][j]>k+2){
            	mp[i+1][j]=t;
                dfs(i+1,j,k+2,0);
                mp[i+1][j]=-1;
            }
    }
}
int main(){
    me(mp);
    read(m);read(n);
    for(register int i=1;i<=m;++i)
        for(register int j=1;j<=m;++j)
            f[i][j]=inf;
    int x,y,c;
    for(register int i=1;i<=n;++i){
        read(x);read(y);read(c);
        mp[x][y]=c;
    }
    dfs(1,1,0,1);
    if(f[m][m]<inf)
        printf("%d",f[m][m]);
    else
        printf("-1");
    return 0;
}

