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
#define in() freopen("relatives.in","r",stdin)
#define out() freopen("relatives.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
int n,k;
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int gcd(int a,int b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int a[1000010];
I void work(){
    --k;
    int len=0;
    for(R int i=1;i<n;++i)
        if(gcd(i,n)==1) a[len++]=i;
    printf("%d\n",(k/len)*n+a[k%len]);
}
int main(){
    _(n),_(k);
    work();
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1ll, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }

