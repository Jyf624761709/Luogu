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
int mp[31][31],n,m,x,y;
ll f[31][31];
template <typename _Tp>
  I void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void u(){
	mp[x][y]=1;
	mp[x-2][y-1]=1;
	mp[x-2][y+1]=1;
	mp[x+2][y-1]=1;
	mp[x+2][y+1]=1;
	mp[x-1][y-2]=1;
	mp[x+1][y-2]=1;
	mp[x-1][y+2]=1;
	mp[x+1][y+2]=1;
}
int main(){
	/*in(t);
	  out(t);*/
	read(n);read(m);read(x);read(y);
	u();
	for(R int i=0;i<=n;++i)
	    for(R int j=0;j<=m;++j){
	    	if(i==0&&j==0){
	    		if(!mp[i][j])
	    	        f[i][j]=1;
	    		continue;
	    	}
	    	if(!mp[i][j])
	    	    f[i][j]=f[i-1][j]+f[i][j-1];
	    }
	printf("%lld",f[n][m]);
	return 0;
}

