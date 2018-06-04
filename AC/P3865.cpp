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
typedef long long ll;
const int N=100010;
int n,m,f[N][32],a[N],x,y;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void dp(){
	for(R int i=1;i<=n;++i)
	    _(a[i]),f[i][0]=a[i];
	for(R int j=1;(1<<j)<=n;++j)
	    for(R int i=1;i+(1<<j)-1<=n;++i)
	        f[i][j]=mx(f[i][j-1],f[i+(1<<(j-1))][j-1]);
}
I int que(int l,int r){
	int k=log2(r-l+1);
	return mx(f[l][k],f[r-(1<<k)+1][k]);
}
I void work(){
	for(R int i=1;i<=m;++i)
	    _(x),_(y),printf("%d\n",que(x,y));
}
int main(){
    //in(t);out(t);
    _(n),_(m);
    dp();
    work();
    return 0;
}

