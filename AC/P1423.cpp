#include<cstdio>
int main(){
	double n,ans=0,d=2;
	int t=0;
	scanf("%lf",&n);
	while(ans<=n){
		ans+=d;
		d*=0.98;
		t++;
	}
	printf("%d",t);
	return 0;
}

