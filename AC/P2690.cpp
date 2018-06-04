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
#define m(a) memset(a,-1,sizeof(a))
//inline
//register
typedef long long ll;
int t,w,a[1005],f[1005][3][33];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline int mx(int a,int b){
	return a>b?a:b;
}
int dfs(int i,int j,int k){//第i个时刻，j课树，移动k词 
	if(i>t) return 0;
	if(f[i][j][k]!=-1) return f[i][j][k];
	int u=0,b;
	if(j!=a[i]&&k<w)
		u=dfs(i+1,3-j,k+1)+1;
	b=dfs(i+1,j,k)+(j==a[i]?1:0);
	return f[i][j][k]=mx(u,b);
}
int main(){
	/*in(t);
	  out(t);*/
	read(t),read(w);
	for(register int i=1;i<=t;++i)
	    read(a[i]);
	m(f);
	cout<<dfs(1,1,0);
	return 0;
}


