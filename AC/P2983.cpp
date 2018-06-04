#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n;
ll b;
ll ans;
struct A{
    ll c,p;
}m[100005];
template <typename _Tp>
  I void read(_Tp &x){
      ll w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I bool cmp(A a,A b){
    return a.p<b.p;
}
int main(){
    /*in(t);
      out(t);*/
    read(n);read(b);
    for(R int i=1;i<=n;++i){
        read(m[i].p);
        read(m[i].c);
    }
    sort(m+1,m+1+n,cmp);
    for(R int i=1;i<=n;++i){
        ll k=b/m[i].p;
        if(k>m[i].c){
            b-=m[i].c*m[i].p;
            ans+=m[i].c;
        }
        else{
            ans+=k;
            break;
        }
    }
    printf("%lld",ans);
    return 0;
}

