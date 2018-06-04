#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("tt.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
const int N=305;
int n,m,fx[5]={-1,0,0,1},fy[5]={0,-1,1,0};
bool p[N][N];
int mi[N][N];
char mp[N][N];
int fxx,fyy;
struct KKK{
	int x,y;
};
struct KFC{
	int stx,sty,enx,eny;
}pt[30];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void bfs(){
	queue<KKK> q;
	KKK tmp;
	tmp.x=fxx;
	tmp.y=fyy;
	q.push(tmp);
	p[fxx][fyy]=1;
	mi[fxx][fyy]=0;
	while(!q.empty()){
		tmp=q.front();
		q.pop();
		if(mp[tmp.x][tmp.y]=='='){
			printf("%d",mi[tmp.x][tmp.y]);
			exit(0);
		}
		for(R int i=0;i<4;++i){
			int xx=tmp.x+fx[i],yy=tmp.y+fy[i];
			if(xx<1||xx>n||yy<1||yy>m||mp[xx][yy]=='#'||p[xx][yy])
				continue;
			if(mp[xx][yy]=='.'||mp[xx][yy]=='='){
				KKK tmp1;
				tmp1.x=xx;
				tmp1.y=yy;
				q.push(tmp1);
				p[xx][yy]=1;
				mi[xx][yy]=mi[tmp.x][tmp.y]+1;
				continue;
			}
			if(pt[mp[xx][yy]-'A'].stx==xx&&pt[mp[xx][yy]-'A'].sty==yy){
				KKK tmp1;
				tmp1.x=pt[mp[xx][yy]-'A'].enx;
				tmp1.y=pt[mp[xx][yy]-'A'].eny;
				q.push(tmp1);
				p[xx][yy]=1;
				mi[tmp1.x][tmp1.y]=mi[tmp.x][tmp.y]+1;
			}
			if(pt[mp[xx][yy]-'A'].enx==xx&&pt[mp[xx][yy]-'A'].eny==yy){
				KKK tmp1;
				tmp1.x=pt[mp[xx][yy]-'A'].stx;
				tmp1.y=pt[mp[xx][yy]-'A'].sty;
				q.push(tmp1);
				p[xx][yy]=1;
				mi[tmp1.x][tmp1.y]=mi[tmp.x][tmp.y]+1;
			}
		}
	}
}
int main(){
	scanf("%d%d\n",&n,&m);
	for(R int i=1;i<=n;++i){
		for(R int j=1;j<=m;++j){
		    mp[i][j]=getchar();
			if(mp[i][j]=='@'){
				fxx=i,fyy=j;
			    continue;
			}
			if('A'<=mp[i][j]&mp[i][j]<='Z')
				if(pt[mp[i][j]-'A'].stx==0){
					pt[mp[i][j]-'A'].stx=i;
					pt[mp[i][j]-'A'].sty=j;
				}
				else{
					pt[mp[i][j]-'A'].enx=i;
					pt[mp[i][j]-'A'].eny=j;
				}
		}
		if(i<n)
	        scanf("\n");
	}
	bfs();
	printf("-1");
	return 0;
}
