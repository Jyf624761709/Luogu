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
int n,a[1005],f[1005][1005];
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
    //in();out();
    _(n);
    for(R int i=1;i<=n;++i)
       _(a[i]),a[i+n]=a[i];
    for(R int l=2;l<=n;++l)
        for(R int i=1;i+l-1<n<<1;++i){
        	int j=i+l-1;
        	for(R int k=i;k<j;++k)
        	    f[i][j]=mx(f[i][j],f[i][k]+f[k+1][j]+a[k+1]*a[i]*a[j+1]);
        }
    int ans=ine;
    for(R int i=1;i<=n;++i)
        ans=mx(ans,f[i][i+n-1]);
    cout<<ans;
    return 0;
}

