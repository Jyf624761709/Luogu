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
#define gc() getchar()
typedef long long ll;
const int mod=1e9+7;
ll n,a[105][105],ans[105][105];
ll k;
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
/*I char gc(){
    static char BB[10000005],*S=BB,*T=BB;
    return S==T&&(T=(S=BB)+fread(BB,1,1000000,stdin),S==T)?EOF:*S++;
}*/
ll t[105][105];
I void a_a(){
    for(R int i=1;i<=n;++i)
        for(R int j=1;j<=n;++j)
            t[i][j]=a[i][j],a[i][j]=0;
    for(R int i=1;i<=n;++i)
        for(R int j=1;j<=n;++j)
            for(R int k=1;k<=n;++k)
                a[i][j]=(a[i][j]+(t[i][k]*t[k][j])%mod)%mod;
}
I void s_s(){
    for(R int i=1;i<=n;++i)
        for(R int j=1;j<=n;++j)
            t[i][j]=ans[i][j],ans[i][j]=0;
    for(R int i=1;i<=n;++i)
        for(R int j=1;j<=n;++j)
            for(R int k=1;k<=n;++k)
                ans[i][j]=(ans[i][j]+(t[i][k]*a[k][j])%mod)%mod;
}
I void ksm(ll k){
    while(k>0){
        if(k&1) s_s();
        a_a();
        k>>=1;
    }
}
int main(){
    //in();out();
    int t;
    _(t);
    while(t--){
        _(k);
        n=3;
        a[1][1]=ans[1][1]=0,a[1][2]=ans[1][2]=0,a[1][3]=ans[1][3]=1;
        a[2][1]=ans[2][1]=1,a[2][2]=ans[2][2]=0,a[2][3]=ans[2][3]=0;
        a[3][1]=ans[3][1]=0,a[3][2]=ans[3][2]=1,a[3][3]=ans[3][3]=1;
        ksm(k-2);
        printf("%lld\n",(ans[1][1]+ans[2][1]+ans[3][1])%mod);
    }
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=gc();
      if (c=='-') w=-1ll, c=gc();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=gc();
      x*=w;
  }
