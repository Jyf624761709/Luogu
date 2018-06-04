#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int ans[1005][1005],tot,n,m,mp[1005][1005],jl[1000005][4];
void input(){
	char s[1005];
	scanf("%d %d\n",&n,&m);
    for(int i=1;i<=n;i++){
    	scanf("%s\n",s+1);
    	for(int j=1;j<=n;j++)
    	    mp[i][j]=s[j]-'0';
    }
}
bool pd(int a,int b){
	if(a==1&&b==0)
	     return true;
	if(a==0&&b==1)
	     return true;
	return false;
}
void dfs(int x,int y){
	tot++;
	int t=mp[x][y];
	mp[x][y]=-1;
	jl[tot][1]=x;
	jl[tot][2]=y;
	if(pd(mp[x-1][y],t)==true&&x-1>0)
	    dfs(x-1,y);
	if(pd(mp[x][y-1],t)==true&&y-1>0)
	    dfs(x,y-1);
	if(pd(mp[x][y+1],t)==true&&y+1<=n)
	    dfs(x,y+1);
	if(pd(mp[x+1][y],t)==true&&x+1<=n)
	    dfs(x+1,y);
}
void xz(){
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=n;j++){
	    	if(mp[i][j]>-1){
			    tot=0;	        
			    dfs(i,j);
			    for(int k=1;k<=tot;k++)
			    	ans[jl[k][1]][jl[k][2]]=tot;
	    	}
	    }
}
int main(){
    int xx,xy;
	input();
	xz();
	for(int i=1;i<=m;i++){
		scanf("%d%d",&xx,&xy);
		printf("%d\n",ans[xx][xy]);
	}
	return 0;
}

