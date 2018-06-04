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
ll n,ans;
ll phi[50005],p[50005],t=0;
bool m[50005];
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I ll make(ll x){
    phi[1]=1;
    for(R ll i=2;i<=x;++i){
        if(!m[i]){
            phi[i]=i-1;
            p[++t]=i;
        }
        for(R ll j=1ll;j<=t&&p[j]*i<=x;++j){
            m[p[j]*i]=1;
            if(i%p[j]==0){
                phi[i*p[j]]=phi[i]*p[j];
                break;
            }
            phi[i*p[j]]=phi[i]*(p[j]-1);
        }
        phi[i]+=phi[i-1];
    }
    return phi[n-1]<<1|1;
}
int main(){
    //in();out();
    _(n);
    if(n==1){
        printf("0");
        return 0;
    }
    printf("%lld",make(n));
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

