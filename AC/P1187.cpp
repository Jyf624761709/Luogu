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
int n,m,h[1010][1010];
char c;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int wr(int a){
	return mx(a,0);
}
int main(){
	//in(t);out(t);
	int ans=0;
	scanf("%d %d\n",&n,&m);
	for(R int i=1;i<=n;++i){
		for(R int j=1;j<=m;++j){
		    c=getchar();
		    h[i][j]=c-'0';
		}
		if(i<n)scanf("\n");
	}
	for(R int i=1;i<=n;++i)
		for(R int j=1;j<=m;++j){
			ans+=wr(h[i][j]-h[i-1][j]);
			ans+=wr(h[i][j]-h[i][j-1]);
			ans+=wr(h[i][j]-h[i+1][j]);
			ans+=wr(h[i][j]-h[i][j+1]);
			if(h[i][j])ans+=2;
		}
	printf("%d",ans);
	return 0;
}


