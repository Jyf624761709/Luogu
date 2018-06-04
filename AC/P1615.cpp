#include<cstdio>
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	ll a,b,c,d,e,f,t,s,ans;
	scanf("%lld:%lld:%lld\n%lld:%lld:%lld\n%lld",&a,&b,&c,&d,&e,&f,&s);
	t=(d*3600+e*60+f)-(a*3600+b*60+c);
	ans=t*s;
	printf("%lld",ans);
	return 0;
}
