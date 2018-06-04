#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n,m;
bool p[18][18],pd=0;
int l[100005][5],lx,ly;
void dfs(int x,int y,int ans){
	ans++;
	l[ans][1]=x;
	l[ans][2]=y;
	if(x==lx&&y==ly){
		pd=1;
		printf("(%d,%d)",l[1][1],l[1][2]);
		for(int i=2;i<=ans;i++)
		    printf("->(%d,%d)",l[i][1],l[i][2]);
		printf("\n");
		return ;
	}
	p[x][y]=0;
	if(p[x][y-1]==1&&y-1>0)
	    dfs(x,y-1,ans);
	if(p[x-1][y]==1&&x-1>0)
	    dfs(x-1,y,ans);
	if(p[x][y+1]==1&&y+1<=n)
	    dfs(x,y+1,ans);
	if(p[x+1][y]==1&&x+1<=m)
	    dfs(x+1,y,ans);
	p[x][y]=1;
}
int main(){
    int fx,fy;
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++){
    	for(int j=1;j<=n;j++)
    	    scanf("%d",&p[i][j]);
    }
    scanf("%d%d%d%d",&fx,&fy,&lx,&ly);
    dfs(fx,fy,0);
    if(pd==0)
        printf("-1");
	return 0;
}


