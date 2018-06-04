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
#define in() freopen(".in","r",stdin)
#define out() freopen(".out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
#define gc() getchar()
typedef long long ll;
int n,q,a[100010],bl,p[100010],ans=0;;
bool s[100010];
struct KFC{
    int l,r,id;
}c[100010];
I bool cmp(KFC a,KFC b){
    return (a.l/bl)==(b.l/bl) ? a.r<b.r : a.l<b.l;
}
/*char ss[1<<17],*A=ss,*B=ss;
I char gc(){return A==B&&(B=(A=ss)+fread(ss,1,1<<17,stdin),A==B)?EOF:*A++;}*/
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void add(int u){
    if(++p[a[u]]==1) ++ans;
}
I void del(int u){
    if(--p[a[u]]==0) --ans;
}
int main(){
    //in();out();
    int x,y;x=y=0;
    _(n),_(q);
    bl=sqrt(n);
    for(R int i=1;i<=n;++i) _(a[i]);
    for(R int i=1;i<=q;++i) _(c[i].l),_(c[i].r),c[i].id=i;
    sort(c+1,c+1+q,cmp);
    for(R int i=1;i<=q;++i){
        while(x<c[i].l) del(x++);
        while(c[i].l<x) add(--x);
        while(c[i].r<y) del(y--);
        while(y<c[i].r) add(++y);
        if(ans==c[i].r-c[i].l+1) s[c[i].id]=1;
    }
    for(R int i=1;i<=q;++i) s[i] ? puts("Yes") : puts("No");
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
