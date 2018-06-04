#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<cmath>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
//inline 
//register
typedef long long ll;
int h,n,v,f[45005];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
int main(){
	/*in(t);
	  out(t);*/
	read(h);read(n);
	for(register int i=1;i<=n;++i){
		read(v);
		for(register int j=h;j>=v;--j)
		    f[j]=max(f[j],f[j-v]+v);
	}
	cout<<f[h];
	return 0;
}


