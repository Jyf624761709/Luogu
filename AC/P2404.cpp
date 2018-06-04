#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n,a[1005];
void dfs(int ans,int js){
	if(ans==n){
		bool pd=1;
		for(int i=2;i<js;i++){
			if(a[i]<a[i-1]){
			    pd=0;
			    break;
			}
		}
		if(pd==1){
		    printf("%d",a[1]);
		    for(int i=2;i<js;i++)
		        printf("+%d",a[i]);
	    	printf("\n");
		}
		return ;
	}
	if(ans>n)
	    return ;
	for(int i=1;i<n;i++){
		a[js]=i;
	    dfs(ans+i,js+1);
	}
}
int main(){
    scanf("%d",&n);
    dfs(0,1);
	return 0;
}


