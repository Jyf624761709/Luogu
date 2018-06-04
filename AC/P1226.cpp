#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXX=2147483647;
const int MINN=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
//inline
typedef long long ll;
ll a,b,c;
inline ll power(ll a,ll x){
    ll ans=1;
	while(x>0){
		if(x&1!=0)
			ans=(ans%c*a%c)%c;
		a=(a%c*a%c)%c;
		x>>=1;
	}
	return ans%c;
}
int main(){
	scanf("%lld %lld %lld",&a,&b,&c);
	printf("%lld^%lld mod %lld=%lld",a,b,c,power(a,b));
	return 0;
}



