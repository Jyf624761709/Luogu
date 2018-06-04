#include<cstdio>
#include<cmath>
int main(){
    long long ans;
    int i,t,n;
	double ja,jn,t1,t2;
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
	ans%=1<<31;
	printf("%lld=",ans);
	t=ans;
	for(i=2;i*i<=ans;i++){
		if(t%i==0){
		    printf("%d",i);
		    t/=i;
		    break;
		}
	}
	if(t==ans){
	    printf("%d",t);
	    return 0;
	}
	for(i=2;i*i<=ans;i++){
		if(t%i==0){
		    printf("*%d",i);
			t/=i;
		    i--;
		}
	}
	if(t>1)
	    printf("*%d",t);
	return 0;
}

