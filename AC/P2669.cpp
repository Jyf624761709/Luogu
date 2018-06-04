#include<cstdio>
int main(){
	int n,i,k=1,ts=1,ans=0,j=2;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i<=ts){
		    ans+=k;
		}
	    else{
		    ans+=++k;
		    ts+=j;
			j++;
		} 
	}
	printf("%d",ans);
	return 0;
}

