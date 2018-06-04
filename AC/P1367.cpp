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
const int N=100005;
int n,t;
struct KFC{
	int k,id,b;
}ans[N],ans1[N],ans2[N];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I bool cmp(KFC a,KFC b){
	return a.k<b.k;
}
int main(){
	//in(t);out(t);
	rd(n);rd(t);
	for(R int i=1;i<=n;++i){
		rd(ans1[i].k),rd(ans1[i].b);
		ans1[i].id=i;
		ans2[i].b=ans1[i].b;
		ans2[i].k=ans1[i].k+t*ans1[i].b;
	}
    sort(ans1+1,ans1+1+n,cmp);
	sort(ans2+1,ans2+1+n,cmp);
	ans2[n+1].k=-1;
	ans[0].k=-1;
	for(R int i=1;i<=n;++i){
		ans[ans1[i].id].k=ans2[i].k;
		ans[ans1[i].id].b=ans2[i].b;
		if(ans2[i].k==ans2[i-1].k||ans2[i].k==ans2[i+1].k)
			ans[ans1[i].id].b=0;
	}
	for(R int i=1;i<=n;++i)
		printf("%d %d\n",ans[i].k,ans[i].b);
	return 0;
}
