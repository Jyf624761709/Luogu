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
int m,n,a[52];
bool p[1002];
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
	//in(t);out(t);
	rd(m);rd(n);
	int ans=n;
	for(R int i=1;i<=n;++i){
		rd(a[i]);
		p[a[i]]=1;
	}
	sort(a+1,a+1+n);
	for(R int i=1;i<=n;++i){
		int id=-1;
		for(R int j=a[i];j<=n*m;++j)
			if(!p[j]){
				p[j]=1;
				id=j;
				break;
			}
		if(id<0)
			--ans;
	}
	cout<<n-ans;
	return 0;
}
