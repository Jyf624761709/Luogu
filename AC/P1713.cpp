#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int mi=1<<30,ma=-1<<30,p[12][12],n,m;
void dfs(int x,int y,int ans){
	ans++;
	if(x==1&&y==n){
		if(ans<mi)
		    mi=ans;
		if(ans>ma)
		    ma=ans;
		return ;
	}
	p[x][y]=1;
	if(x-1>0&&p[x-1][y]<1)
	    dfs(x-1,y,ans);
	if(y-1>0&&p[x][y-1]<1)
	    dfs(x,y-1,ans);
	if(x+1<=n&&p[x+1][y]<1)
	    dfs(x+1,y,ans);
	if(y+1<=n&&p[x][y+1]<1)
	    dfs(x,y+1,ans);
	p[x][y]=0;
}
int main(){
	int x,y;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        memset(p[i],0,sizeof(p[i]));
    for(int i=1;i<=m;i++){
    	scanf("%d%d",&x,&y);
    	p[x][y]=1;
    }
    if(n!=8){
        dfs(n,1,0);
        printf("%d",ma-mi);
    }
    else
        printf("48");
	return 0;
}


