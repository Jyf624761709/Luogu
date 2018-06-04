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
int l,n,m,r[50005];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I bool check(int f){
    int sum=0,t[50005];
    for(R int i=1;i<=n+1;++i)
        t[i]=r[i];
    for(R int i=1;i<=n+1;++i){
        if(t[i]-t[i-1]<f){
            ++sum;
            t[i]=t[i-1];
        }
    }
    return sum<=m;
}
int main(){
    //in(t);out(t);
    _(l),_(n),_(m);
    for(R int i=1;i<=n;++i)
        _(r[i]);
    sort(r+1,r+1+n);
    r[n+1]=l;
    int ll=inf,rr=l-r[1],mid;
    for(R int i=2;i<=n+1;++i)
        ll=mn(ll,r[i]-r[i-1]);
    while(1){
        if(ll+1==rr)
            break;
        mid=(ll+rr)>>1;
        if(check(mid))
            ll=mid;
        else
            rr=mid;
    }
    if(check(rr))
        printf("%d",rr);
    else
        printf("%d",ll);
    return 0;
}

