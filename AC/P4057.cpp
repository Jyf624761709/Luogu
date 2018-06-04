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
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I ll gcd(ll c,ll d){
    if(c%d==0)
        return d;
    gcd(d,c%d); 
}
I ll lcm(ll a,ll b){
    return gcd(a,b)*(a/gcd(a,b))*(b/gcd(a,b));
}
int main(){
    /*in();out();*/
    ll x,y,z;
    _(x),_(y),_(z);
    printf("%lld",lcm(lcm(x,y),z));
    return 0;
}
