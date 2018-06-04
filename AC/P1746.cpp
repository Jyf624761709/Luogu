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
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,x2,y2;
int x,y;
char p[1005][1005];
int mp[1005][1005];
struct KFC{
	int mx,my;
};
queue<KFC>q;
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int bfs(){
	int fx[5]={-1,0,0,1},fy[5]={0,-1,1,0};
	KFC t;
	t.mx=x;
	t.my=y;
	q.push(t);
	p[x][y]='1';
	while(!q.empty()){
		KFC tmp=q.front();
		q.pop();
		if(tmp.mx==x2&&tmp.my==y2)
			return mp[x2][y2];
		for(R int i=0;i<4;++i){
		    int nx=tmp.mx+fx[i],ny=tmp.my+fy[i];
			if(nx<1||nx>n||ny<1||ny>n||p[nx][ny]=='1')
				continue;
			KFC tmp2;
			tmp2.mx=nx;
			tmp2.my=ny;
			q.push(tmp2);
			p[nx][ny]='1';
			mp[nx][ny]=mp[tmp.mx][tmp.my]+1;
		}
	}
	return -1;
}
int main(){
	scanf("%d\n",&n);
	for(R int i=1;i<=n;++i)
		scanf("%s\n",p[i]+1);
    scanf("%d%d%d%d",&x,&y,&x2,&y2);
	if(x==x2&&y==y2){
		puts("0");
		return 0;
	}
	printf("%d",bfs());
	return 0;
}

