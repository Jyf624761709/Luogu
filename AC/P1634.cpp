#include<cstdio>
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	ll x,n,ans=1;
	scanf("%lld %lld",&x,&n);
	for(int i=1;i<=n;i++){
		ans+=ans*x;
	}
	cout<<ans<<endl;
	return 0;
}
