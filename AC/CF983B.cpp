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
const int N=5010;
int n,q;
ll a[N],f[N][N],ans[N][N];
template <typename _Tp> I void _(_Tp &x);
I ll mx(ll a,ll b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    _(n);
    for(R int i=1;i<=n;++i) _(a[i]),ans[i][i]=f[i][i]=a[i];
    for(R int l=2;l<=n;++l)
        for(R int i=1,j;i+l-1<=n;++i){
            j=i+l-1;
            f[i][j]=f[i][j-1]^f[i+1][j];
            ans[i][j]=mx(mx(ans[i][j-1],ans[i+1][j]),f[i][j]);
        }
    _(q);
    int l,r;
    while(q--){
        _(l),_(r);
        printf("%lld\n",ans[l][r]);
    }
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

