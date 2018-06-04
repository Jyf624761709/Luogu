#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define I inline
#define R register
typedef long long ll;
int n;
ll s,len;
ll a[200010],b[200010];
char ss[1<<17],*A=ss,*B=ss;
I char gc(){return A==B&&(B=(A=ss)+fread(ss,1,1<<17,stdin),A==B)?EOF:*A++;}
template <typename _Tp> I void _(_Tp &x);
I ll mx(ll a,ll b){return a>b?a:b;}I ll mn(ll a,ll b){return a<b?a:b;}
I bool check(ll x){
    R ll sum=0;
    for(R int i=1;i<=n;++i)
        if(a[i]+b[i]*x>=len) sum+=a[i]+b[i]*x;
    return sum>=s;
}
int main(){
    _(n),_(s),_(len);
    R ll l=0,r,mid,ttt=mx(s,len);
    for(R int i=1;i<=n;++i) _(a[i]);
    for(R int i=1;i<=n;++i) _(b[i]);
    r=ttt;
    for(R int i=1;i<=n;++i) r=mn(r,(ttt-a[i])/b[i]+1);
    while(l+1<r){
        mid=l+r>>1;
        check(mid) ? r=mid : l=mid;
    }
    if(check(l)) printf("%lld",l);
    else printf("%lld",r);
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      char c=0;x=0;
      while (c^45&&(c<48||c>57)) c=gc();
      while(c>=48&&c<=57) x=(x<<1)+(x<<3)+(c^48),c=gc();
  }
