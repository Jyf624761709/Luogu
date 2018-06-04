#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
typedef long long ll;
priority_queue<ll,vector<ll>,greater<ll> > a;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int main(){
	ll ans=0,n,t;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
	    scanf("%lld",&t);
	    a.push(t);
	}
	for(int i=1;i<=n-1;i++){
		int c,d;
		c=a.top();
		a.pop();
		d=a.top();
		a.pop();
		ans+=c+d;
		a.push(c+d);
	}
	printf("%lld",ans);
	return 0;
}


