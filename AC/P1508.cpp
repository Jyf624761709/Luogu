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
int n,m,mp[201][201],f[201][201];     
template <typename _Tp>
  I void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
	/*in(t);
	  out(t);*/
	read(n);read(m);
	for(R int i=1;i<=n;++i)
	   for(R int j=1;j<=m;++j){
	       read(mp[i][j]);
	       f[i][j]=mx(mx(f[i-1][j-1],f[i-1][j]),f[i-1][j+1])+mp[i][j];
	   }
	printf("%d",mx(mx(f[n][m/2],f[n][m/2+1]),f[n][m/2+2]));
	return 0;
}

