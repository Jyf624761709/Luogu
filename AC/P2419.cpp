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
int n,m;
int f[105][105];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in(t);out(t);
    _(n);_(m);
    int a,b;
    for(R int i=1;i<=m;++i){
        _(a),_(b);
        f[a][b]=1;
        f[b][a]=-1;
    }
    for(R int k=1;k<=n;++k)
        for(R int i=1;i<=n;++i)
            for(R int j=1;j<=n;++j){
                if(f[i][k]==1&&f[k][j]==1)
                    f[i][j]=1,f[j][i]=-1;
                if(f[i][k]==-1&&f[k][j]==-1)
                    f[i][j]=-1,f[j][i]=1;
            }
    int sum,ans=0;
    for(R int i=1;i<=n;++i){
        sum=0;
        for(R int j=1;j<=n;++j)
            if(f[i][j]!=0)
                ++sum;
        if(sum==n-1)
            ++ans;
    }
    printf("%d",ans);
    return 0;
}

