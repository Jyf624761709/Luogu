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
int m,n,mp[52][52],f[52][52][52][52];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b,int c,int d){
	int ma=a;
	if(ma<b) ma=b;
	if(ma<c) ma=c;
	if(ma<d) ma=d;
	return ma;
}
int main(){
	/*in(t);
	  out(t);*/
	rd(m);rd(n);
	for(R int i=1;i<=m;++i)
	    for(R int j=1;j<=n;++j)
	        rd(mp[i][j]);
	for(R int i=1;i<=m;++i)
	    for(R int j=1;j<=n;++j)
	        for(R int k=1;k<=m;++k)
	            for(R int l=1;l<=n;++l){
	            	f[i][j][k][l]=mx(f[i-1][j][k-1][l],f[i-1][j][k][l-1],f[i][j-1][k-1][l],f[i][j-1][k][l-1])+mp[i][j]+mp[k][l];
	            	if(i==k&&j==l)
	            		f[i][j][k][l]-=mp[i][j];
	            }
	printf("%d",f[m][n][m][n]);
	return 0;
}


