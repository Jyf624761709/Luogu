#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
const int inf=2147483647;
const int ine=-2147483647;
#define I inline
#define R register
#define m(a) memset(a,-1,sizeof(a))
#define in() freopen("ctravel.in","r",stdin)
#define out() freopen("ctravel.out","w",stdout)
typedef long long ll;
const int fx[]={-1,0,0,1},fy[]={0,-1,1,0};
char mp[110][110];
int n,m,s,r1,c1,r2,c2,f[110][110][20];
I int as(int a){
	return a>0?a:-a;
}
I int mm(int xx,int yy){
	return as(xx-r2)+as(yy-c2);
}
I int dfs(int x,int y,int t){
	if(t==s)
		return x==r2&&y==c2;
	if(f[x][y][t]!=-1) return f[x][y][t];
	f[x][y][t]=0;
	for(R int i=0;i<4;++i){
		int xx=x+fx[i],yy=y+fy[i];
		if(xx<1||yy<1||xx>n||yy>m||mp[xx][yy]=='*') continue;
		if(mm(xx,yy)<=s-t-1) f[x][y][t]+=dfs(xx,yy,t+1);
	}
	return f[x][y][t];
}
int main(){
	m(f);
	scanf("%d%d%d\n",&n,&m,&s);
	for(R int i=1;i<=n;++i) scanf("%s\n",mp[i]+1);
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	printf("%d",dfs(r1,c1,0));
	return 0;
}
/*
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
const int inf=2147483647;
const int ine=-2147483647;
#define I inline
#define R register
#define m(a) memset(a,-1,sizeof(a))
#define in() freopen("ctravel.in","r",stdin)
#define out() freopen("ctravel.out","w",stdout)
typedef long long ll;
const int fx[]={-1,0,0,1},fy[]={0,-1,1,0};
char mp[110][110];
int n,m,s,r1,c1,r2,c2,f[110][110][3];
I void work(){
	for(R int t=1;t<=s;++t)
	    for(R int i=1;i<=n;++i)
	        for(R int j=1;j<=m;++j){
	        	if(mp[i][j]=='*') continue;
				int xx,yy;
				f[i][j][t&1]=0;
	        	for(R int k=0;k<4;++k){
	        		xx=i+fx[k],yy=j+fy[k];
	        		if(xx<1||xx>n||yy<1||yy>m||mp[xx][yy]=='*') continue;
	        		f[i][j][t&1]+=f[xx][yy][(t+1)&1];
				}
			}
}
int main(){
    scanf("%d%d%d\n",&n,&m,&s);
    for(R int i=1;i<=n;++i) scanf("%s\n",mp[i]+1);
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    f[r1][c1][0]=1;
    work();
    printf("%d",f[r2][c2][s&1]);
    return 0;
}
*/

