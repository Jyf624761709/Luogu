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
//inline
typedef long long ll;
int m,n,c,v[10005],w[10005],f[10005];
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
int main(){
	int ans=-1;
	read(m);read(n);read(c);
	for(register int i=1;i<=n;++i){
		read(w[i]);
		read(v[i]);
	}
	for(register int i=1;i<=n;++i)
		for(register int j=c;j>=v[i];--j){
			f[j]=mx(f[j],f[j-v[i]]+w[i]);
			if(f[j]>=m)
				ans=mx(ans,c-j);
		}
	if(ans<0)
		printf("Impossible");
	else
		printf("%d",ans);
	return 0;
}

