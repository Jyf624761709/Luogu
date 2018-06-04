#include<cstdio>
int main(){
	int n,min,s,j,ans;
	scanf("%d",&n);
	scanf("%d %d",&s,&j);
	if(n%s==0)
	        min=n/s*j;
    	else
	        min=(n/s+1)*j;
	for(int i=2;i<=3;i++){
		scanf("%d %d",&s,&j);
	    if(n%s==0)
	        ans=n/s*j;
    	else
	        ans=(n/s+1)*j;
	    if(ans<min)
	        min=ans;
	}
	printf("%d",min);
	return 0;
}

