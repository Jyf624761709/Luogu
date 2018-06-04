#include<cstdio>
int n,r,ans[25];
int dfs(int nu,int syg,int s){
	int i;
	if(nu>r)
	    return 0;
	for(i=syg+1;i<=n-r+nu;i++){
		ans[s]=i;
	    dfs(nu+1,i,s+1);
	    if(nu==r){
	        for(int j=1;j<r;j++)
	            printf("%3d",ans[j]);
	        printf("%3d\n",i);
	    }
	}
	return 0;
}
int main(){
	scanf("%d %d",&n,&r);
	dfs(1,0,1);
	return 0;
}

