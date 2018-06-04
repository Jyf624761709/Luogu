#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
typedef long long ll;
ll x,y;
ll work(int a){
	ll ans=0;
	for(ll i=1;i<=a;i++){
	    ans+=a/i*((a/(a/i)-i+1)*(i+a/(a/i))/2);
	    i=a/(a/i);
	}
	return ans;
}
int main(){
	scanf("%lld%lld",&x,&y);
	printf("%lld",work(y)-work(x-1));
	return 0;
}


