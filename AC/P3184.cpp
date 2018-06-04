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
int a[100010];
int n,q,l,r;
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
    _(n),_(q);
    for(R int i=1;i<=n;++i) _(a[i]);
    sort(a+1,a+1+n);
    for(R int i=1;i<=q;++i){
    	_(l),_(r);
    	printf("%d\n",upper_bound(a+1,a+1+n,r)-lower_bound(a+1,a+1+n,l));
    }
    return 0;
}

