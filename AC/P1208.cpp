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
int n,m,sum,ans;
struct KFC{
    int p,a;
}c[5010];
I bool cmp(KFC a,KFC b){
    if(a.p==b.p) return a.a<b.a;
    return a.p<b.p;
}
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    _(n),_(m);
    for(R int i=1;i<=m;++i)
    	_(c[i].p),_(c[i].a);
   	sort(c+1,c+1+m,cmp);
   	int i;
   	for(i=1;i<=m;++i){
   	    if(sum+c[i].a>=n) break;
        ans+=c[i].p*c[i].a;
        sum+=c[i].a;	
    }
    cout<<ans+(n-sum)*c[i].p;
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

