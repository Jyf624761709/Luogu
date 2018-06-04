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
int n,fn[310][310],f[310][310],s[310];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void wk1();
//I void wk2();
int main(){
	//in(t);out(t);
	int a[310];
    _(n);
    for(R int i=1;i<=n;++i)
        _(a[i]),a[i+n]=a[i];
    for(R int i=1;i<n<<1;++i)
        s[i]=s[i-1]+a[i];
	wk1();
	//wk2();
	return 0;
}
I void wk1(){
	for(R int l=2;l<=n;++l)
	    for(R int i=1;i<=(n<<1)-l;++i){
	    	int j=i+l-1;
	    	fn[i][j]=233333333,f[i][j]=-233333333;
	    	for(R int k=i;k<j;++k){
	    	    fn[i][j]=mn(fn[i][j],fn[i][k]+fn[k+1][j]+s[j]-s[i-1]);
	    	    f[i][j]=mx(f[i][j],f[i][k]+f[k+1][j]+s[j]-s[i-1]);
			}
		}
	int ans1=inf,ans2=ine;
	for(R int i=1;i<=n;++i)
	    ans1=mn(ans1,fn[i][i+n-1]),ans2=mx(ans2,f[i][i+n-1]);
    printf("%d\n%d",ans1,ans2);
}

