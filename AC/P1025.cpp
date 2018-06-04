#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int n,k;
ll ans=0;
void dfs(int js,int t,int kk,int syg){
	bool p=1;
	int i;
	js++;
	if(js==k){
	    ans++;
	    return ;
	}
	for(i=syg;i<=t/kk;i++)
		dfs(js,t-i,kk-1,i);
	return ;
}
int main(){
    scanf("%d%d",&n,&k);
    dfs(0,n,k,1);
    printf("%lld",ans);
	return 0;
}


