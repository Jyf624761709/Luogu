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
int n;
struct cow{
	int f,l;
}m[5005];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline bool cmp(cow a,cow b){
	if(a.f==b.f) return a.l<b.l;
	return a.f<b.f;
}
inline int mx(int a,int b){
	return a>b?a:b;
}
int main(){
	/*in(t);
	  out(t);*/
	int l=ine,s=ine;
	read(n);
	for(int i=1;i<=n;++i){
	    read(m[i].f);
	    read(m[i].l);
	}
	sort(m+1,m+1+n,cmp);
	int js=0;
	printf("%d %d",s,l);
	return 0;
}


