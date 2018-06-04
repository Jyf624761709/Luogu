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
struct KFC{
	int s,e;
}t[50005];
I bool cmp(KFC a,KFC b){
	if(a.e==b.e) return a.s<b.s;
	return a.e<b.e;
}
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
int main(){
	int ans=0,r=-1;
	rd(n);
	for(R int i=1;i<=n;++i){
		rd(t[i].s);
		rd(t[i].e);
	}
	sort(t+1,t+1+n,cmp);
	for(R int i=1;i<=n;++i){
		if(r<=t[i].s){
			r=t[i].e;
			++ans;
		}
	}
	printf("%d",ans);
	return 0;
}

