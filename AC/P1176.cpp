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
const ll M=100003;
bool mp[1005][1005];
int n,m,x,y;
ll f[1005][1005];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
	rd(n);rd(m);
	for(R int i=1;i<=m;++i){
		rd(x);rd(y);
		mp[x][y]=1;
	}
	for(R int i=1;i<=n;++i)
	    for(R int j=1;j<=n;++j){
	    	if(i==1&&j==1){
	    		if(!mp[i][j])
	    	        f[i][j]=1ll;
	    		continue;
	    	}
	    	if(!mp[i][j])
	    	    f[i][j]=(f[i-1][j]%M+f[i][j-1]%M)%M;
	    }
	printf("%lld",f[n][n]%M);
	return 0;
}

