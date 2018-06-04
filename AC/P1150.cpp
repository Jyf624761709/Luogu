#include<cstdio>
int main(){
	int n,k,ans=0,y=0;
	scanf("%d %d",&n,&k);
	ans+=n;
	while(n>=k){
		ans+=(n+y)/k;
		n/=k;
		y=n%k;
	}
	printf("%d",ans);
	return 0;
}
