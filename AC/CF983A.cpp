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
int n;
ll p,q,b,g;
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I ll gcd(ll a,ll b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main(){
    //in();out();
    _(n);
    while(n--){
        _(p),_(q),_(b);
        if(p==0){
            puts("Finite");
            continue;
        }
        g=gcd(p,q);
        p/=g,q/=g;
        while(q>1){
            g=gcd(q,b);
            if(g==1) break;
            while(q%g==0) q/=g;
        }
        q==1 ? puts("Finite")  : puts("Infinite");
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

