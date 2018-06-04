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
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int m,n;
bool p[555];
struct KFC{
	int t,mo;
}e[555];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I bool cmp(KFC a,KFC b){
	return a.mo>b.mo;
}
int main(){
	//in(t);out(t);
	_(m),_(n);
	for(R int i=1;i<=n;++i)
		_(e[i].t);
	for(R int i=1;i<=n;++i)
		_(e[i].mo);
	sort(e+1,e+1+n,cmp);
	int ans=m;
	for(R int i=1;i<=n;++i){
		int id=-1;
		for(R int j=e[i].t;j>0;--j)
			if(!p[j]){
				p[j]=1;
				id=j;
				break;
			}
		if(id<0)
			ans-=e[i].mo;
	}
	printf("%d",ans);
	return 0;
}
