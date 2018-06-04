#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int ans=0;
int t,m,n,jl[15];
void dfs(int js,int s){
	if(js==n){
		jl[n]=s;
		bool p=1;
		for(int i=1;i<n;i++)
		    if(jl[i]>jl[i+1]){
		    	p=0;
		    	break;
		    }
		if(p==1) ans++;
		return ;
	}
	for(int i=0;i<=m;i++){
		jl[js]=i;
		if(s-i<0) return ;
		else dfs(js+1,s-i);
	}
}
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&m,&n);
		dfs(1,m);
		printf("%d\n",ans);
		ans=0;
	}
	return 0;
}


