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
typedef long long ll;
int n;
struct KFC{
    int a,b;
}s[10005];
I bool cmp(KFC a,KFC b){
    if(a.b==b.b) return a.a<b.a;
    return a.b<b.b;
}
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in(t);out(t);
    _(n);
    for(R int i=1;i<=n;++i){
        _(s[i].a),_(s[i].b);
        if(s[i].a>s[i].b)
            swap(s[i].a,s[i].b);
    }
    sort(s+1,s+1+n,cmp);
    int t=ine,ans=0;
    for(R int i=1;i<=n;++i)
        if(t<=s[i].a){
            ++ans;
            t=s[i].b;
        }
    printf("%d",ans);
    return 0;
}

