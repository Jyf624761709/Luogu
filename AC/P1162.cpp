#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXN=2147483647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int n,mp[32][32];
inline void input(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=n;j++)   
		    scanf("%d",&mp[i][j]);
}
void dfs(int x,int y){
	mp[x][y]=-1;
	if(x-1>0&&mp[x-1][y]==0)
	    dfs(x-1,y);
	if(y-1>0&&mp[x][y-1]==0)
	    dfs(x,y-1);
	if(x+1<=n&&mp[x+1][y]==0)
	    dfs(x+1,y);
	if(y+1>0&&mp[x][y+1]==0)
	    dfs(x,y+1);
}
void work(){
	for(int i=1;i<=n;i++){
		if(mp[1][i]==0)
		    dfs(1,i);
	}
	for(int i=1;i<=n;i++){
		if(mp[i][1]==0)
		    dfs(i,1);
	}
	for(int i=1;i<=n;i++){
		if(mp[n][i]==0)
		    dfs(n,i);
	}
	for(int i=1;i<=n;i++){
		if(mp[i][n]==0)
		    dfs(i,n);
	}
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=n;j++) {
	    	if(mp[i][j]==-1){
	    	    printf("0 ");
	    	    continue;
	    	}
	    	if(mp[i][j]==0){
	    	    printf("2 ");
	    	    continue;
	    	}
	    	printf("1 ");
	    }
	    printf("\n");
	}
}
int main(){ 
	input();
	work();
	return 0;
}


