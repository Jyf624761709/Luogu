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
const int M=6662333;
ll x,a=2;
template <typename _Tp>
  I void rd(_Tp &x){
      ll w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
ll power(){
    ll ans=1;
	while(x>0){
		if(x&1!=0)
			ans=((ans%M)*(a%M))%M;
		a=(a*a)%M;
		x>>=1;
	}
	return ans;
}
int main(){
	/*in(t);
	  out(t);*/
	rd(x);
	--x;
	printf("%lld",power());
	return 0;
}

