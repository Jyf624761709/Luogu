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
ll f[3005];
int n,p[2505],id;
int s=0;
bool pr[3005];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline void d(){
	for(int i=2;i<=n;++i){
	    if(!pr[i])
	        for(int j=i<<1;j<=n;j+=i)
	            pr[j]=1;
	}
	for(register int i=2;i<=n;i++)
	    if(!pr[i])
		    p[++s]=i;
}
inline int mx(int a,int b){
	return a>b?a:b;
}
int main(){
	/*in(t);
	  out(t);*/
	read(n);
	d();
	f[0]=1;
	for(register int i=1;i<=s;++i)
	    for(register int j=p[i];j<=n;++j)
	        f[j]+=f[j-p[i]];
	cout<<f[n];
	return 0;
}

