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
int n,m,f[2502][2502],ma=ine;
bool mp[2502][2502];
typedef long long ll;
template <typename _Tp>
  I void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void check(int fx,int fy,int lx,int ly){
	for(R int i=fx;i<=lx;++i)
	    for(R int j=fy;j<=ly;++j)
	        if(mp[i][j]==0)
	            return;
    int js=0;
	for(R int i=fx;i<=lx;++i)
	    js+=f[i][ly]-f[i][fy-1];
	ma=mx(ma,js);
}
I void work(){
	int i=n<m?n:m;
	while(i>0){
		for(R int j=1;j<=n-i+1;++j)
			for(R int k=1;k<=m-i+1;++k)
				check(j,k,j+i-1,k+i-1);
		--i;
	}
	printf("%d",ma);
}
int main(){
	/*in(t);
	  out(t);*/
	read(n);read(m);
	for(R int i=1;i<=n;++i)
		for(R int j=1;j<=m;++j){
			read(mp[i][j]);
			f[i][j]=f[i][j-1]+mp[i][j];
		}
	work();
	return 0;
}

