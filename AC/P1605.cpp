#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool p[10][10];
int lx,ly,ans=0;
int n,m,t,fx,fy,x,y;
void dfs(int x,int y,int sx,int sy){
	if(x==lx&&y==ly){
	    ans++;
	    return ;
	}
	p[x][y]=1;
	if(x-1>0&&x-1!=sx&&p[x-1][y]<1)
	    dfs(x-1,y,x,y);
	if(y-1>0&&y-1!=sy&&p[x][y-1]<1)
	    dfs(x,y-1,x,y);
	if(y+1<=m&&y+1!=sy&&p[x][y+1]<1)
	    dfs(x,y+1,x,y);
	if(x+1<=n&&x+1!=sx&&p[x+1][y]<1)
	    dfs(x+1,y,x,y);
	p[x][y]=0;
}
int main(){
    scanf("%d%d%d",&n,&m,&t);
    scanf("%d%d%d%d",&fx,&fy,&lx,&ly);
    for(int i=1;i<=n;i++)
        memset(p[i],0,sizeof(p[i]));
    for(int i=1;i<=t;i++){
    	scanf("%d%d",&x,&y);
    	p[x][y]=1;
    }
    dfs(fx,fy,fx,fy);
    printf("%d",ans);
	return 0;
}


