#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<cmath>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
int n,a[210],f[210][210],sum[210][210];
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    _(n);
    for(R int i=1;i<=n;++i) _(a[i]),f[i][i]=a[i];
    for(R int i=1;i<=n;++i)
        for(R int j=i;j<=n;++j)
     	    sum[i][j]=sum[i][j-1]+a[j];
    for(R int l=2;l<=n;++l)
        for(R int i=1,j;i+l-1<=n;++i){
        	j=i+l-1;
        	f[i][j]=mx(sum[i][j]-f[i+1][j],sum[i][j]-f[i][j-1]);
        }
    printf("%d %d",f[1][n],sum[1][n]-f[1][n]);
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }

