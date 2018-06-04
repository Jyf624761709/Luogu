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
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
set<int>ans;
int n,m,s[1005];
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
int main(){
	/*in();out();*/
	int x,y;
	while(1){
		rd(n);
	    for(R int i=1;i<=n;++i)
	        s[i]=i;
		if(n==0)
		    return 0;
		rd(m);
	    for(R int i=1;i<=m;++i){
		    rd(x);rd(y);
		    _union(x,y);
	    }
	    for(R int i=1;i<=n;++i)
	        ans.insert(_find(i));
	    cout<<ans.size()-1;puts("");
	    ans.clear();
	}
}

