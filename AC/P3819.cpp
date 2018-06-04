#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define I inline
#define R register
const int inf=2147483647;
const int ine=-2147483647;
using namespace std;
typedef long long ll;
ll l,n;
struct house{
	ll x,r;
}h[100005];
I bool cmp(house a,house b){
	return a.x<b.x;
}
I ll as(ll a){
	return a>0?a:-a;
}
int main(){
	ll sum=0;
	scanf("%lld%lld",&l,&n);
	for(R int i=1;i<=n;++i){
		scanf("%lld%lld",&h[i].x,&h[i].r);
		sum+=h[i].r;
	}
	sort(h+1,h+1+n,cmp);
	sum>>=1;
	ll ans=0,st,t=sum;
	for(R int i=1;i<=n;++i){
		t-=h[i].r;
		if(t<=0){
			st=h[i].x;
			break;
		}
	}
	for(R int i=1;i<=n;++i)
		ans+=as(st-h[i].x)*h[i].r;
	printf("%lld",ans);
	return 0;
}

