#include<cstdio>
#include<iostream>
int n,k,x[25],sum=0;
bool prime(int n){
	int i;
    if(n==1||n==0)return 0;
    for(i=2;i*i<=n;i++)
      if(n%i==0)return 0;
    return 1;
}
int zhs(int nu,int syg,int ans){
	int i,t;
	if(nu>k)
	    return 0;
	for(i=syg+1;i<=n-k+nu;i++){
	    t=ans;
	    ans+=x[i];
		ans+=zhs(nu+1,i,ans);
	    if(nu==k){
	        if(prime(ans)==1)
	            sum++;
	    }
	    ans=t;
	}
}
int main(){
	scanf("%d %d\n",&n,&k);
	for(int i=1;i<=n;i++)
	    scanf("%d",&x[i]);
	zhs(1,0,0);
	printf("%d",sum);
	return 0;
}

