#include<cstdio>
#include<cmath>
int main(){
    int n;
	double ja,jn,ans,t1,t2;
	scanf("%d",&n);
	ja=(1+(sqrt)(5))*0.5;
	t1=1;
	jn=(1-(sqrt)(5))*0.5;
	t2=1;
	for(int i=1;i<=n;i++){
		t1*=ja;
		t2*=jn;
	}
	ans=(t1-t2)/((sqrt)(5));
	printf("%.2lf",ans);
	return 0;
}

