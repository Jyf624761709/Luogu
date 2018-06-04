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
int n;
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I void fj(int a){
	int z[100005],l=0,js=0;
	while(a>0){
		if(a&1)
			z[++l]=js;
		a>>=1;
		++js;
	}
	for(R int i=l;i>0;--i){
		if(z[i]==0){
			printf("2(0)");
			if(i>1) printf("+");
				continue;
		}
		if(z[i]==1){
			printf("2");
			if(i>1) printf("+");
				continue;
		}
		printf("2(");
		fj(z[i]);
		printf(")");
		if(i>1)
			printf("+");
	}
}
int main(){
	rd(n);
	fj(n);
	return 0;
}

