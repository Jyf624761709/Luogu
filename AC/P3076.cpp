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
int n,m;
ll a[100010],b[100010],ans; 
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I ll as(ll a){
    return a>0?a:-a;
}
int main(){
    //in();out();
    _(n),_(m);
    for(R int i=1;i<=n;++i)
        _(a[i]),_(b[i]),ans+=as(a[i]-b[i]);
    a[n+1]=m;
    sort(a+1,a+2+n);
    sort(b+1,b+2+n);
    for(R int i=1;i<=n+1;++i)
        ans+=as(a[i]-b[i]);
    printf("%lld",ans);
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

