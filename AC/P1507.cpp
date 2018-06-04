#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXN=2147483647;
const int MINN=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
//inline
inline int mx(int a,int b){
	return a>b?a:b;
}
int t,z,n,fd[55][5],ans=MINN;
inline void input(){
	scanf("%d%d",&t,&z);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	    scanf("%d%d%d",&fd[i][1],&fd[i][2],&fd[i][3]);
}
void dfs(int i,int tj,int zl,int js){
	if(i>n){
		ans=mx(js,ans);
		return;
	}
	if(tj+fd[i][1]<=t&&zl+fd[i][2]<=z)
	    dfs(i+1,tj+fd[i][1],zl+fd[i][2],js+fd[i][3]);
	dfs(i+1,tj,zl,js);
}
int main(){
	/*in(t);
	  out(t);*/
	input();
	dfs(1,0,0,0);
	printf("%d",ans);
	return 0;
}


