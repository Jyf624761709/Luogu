#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<vector>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
ll n,m,a;
template <typename _Tp>
  I void rd(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
	/*in();out();*/
	rd(n);rd(m);rd(a);
	cout<<(n/a+(n%a==0?0:1))*(m/a+(m%a==0?0:1));
	return 0;
}

