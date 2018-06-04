#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int ans=0,n,m,mo[102];
void dfs(int syg,int s){
	if(s>m)
	    return ;
	if(s==m){
		ans++;
		return ;
	}
	for(int i=syg+1;i<=n;i++){
		s+=mo[i];
		dfs(i,s);
		s-=mo[i];
	}
}
int main(){
    scanf("%d%d\n",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&mo[i]);
    dfs(0,0);
    printf("%d",ans);
	return 0;
}


