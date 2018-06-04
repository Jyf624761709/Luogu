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
int f[105],n,m,a[105];
const int mod=1000007;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
	/*in();out();*/
    _(n);_(m);
    f[0]=1;
    for(R int i=1;i<=n;++i){
    	_(a[i]);
    	for(R int j=m;j>0;--j)
    	    for(R int k=1;k<=a[i]&&j>=k;++k)
    	        f[j]=(f[j]+f[j-k])%mod;
    }
    cout<<f[m];
	return 0;
}

