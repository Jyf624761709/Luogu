#include<cstdio>
long long ans=0,n,a[200005],max=-1<<30;
long long dp(){
	for(int i=1;i<=n;i++){
		if(ans<0)
			ans=0;
		ans+=a[i];
		if(ans>max)
			max=ans;
	}
	return max;
}
int main(){
	scanf("%lld\n",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	printf("%lld",dp());
	return 0;
}
