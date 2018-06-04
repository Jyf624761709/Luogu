#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,m,z,x,y,s[10005];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int _find(int p){
	if(s[p]!=p) s[p]=_find(s[p]);
	return s[p];
}
I void _union(int a,int b){
	a=_find(a),b=_find(b);
	if(a==b) return;
	s[a]=b;
}
I bool _p(int a,int b){
	a=_find(a),b=_find(b);
	return a==b;
}
int main(){
	/*in();out();*/
	rd(n);rd(m);
	for(R int i=1;i<=n;++i)
	    s[i]=i;
	for(R int i=1;i<=m;++i){
		rd(z);rd(x);rd(y);
		if(z==1)
			_union(x,y);
		else
			if(_p(x,y))
			    printf("Y\n");
			else
			    printf("N\n");
	}
	return 0;
}

