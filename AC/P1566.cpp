#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;
bool p[1002];
int t,n,x[32],ans=0;
void dfs(int syg,int s){
	if(syg==n||s>x[n])
		return ;
	if(p[s]==1){
		ans++;
	}
	for(int i=syg+1;i<=n;i++)
		dfs(i,s+x[i]);
}
int main(){
	scanf("%d",&t);
	while(t--){
		memset(p,0,sizeof(p));
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&x[i]);
			p[x[i]]=1;
		}
		sort(x+1,x+n+1);
		dfs(0,0);
		printf("%d\n",ans-n+1);
		ans=0;
	}
	return 0;
}

