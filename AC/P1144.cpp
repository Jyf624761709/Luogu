#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
const int mod=100003;
int n,m,dis[1000010],dii[1000010],h[1000010];
bool vis[1000010];
struct KFC444{
	int to,next;
}e[5000010];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
int tot;
I void add(int x,int y){
	e[++tot].to=y;
	e[tot].next=h[x];
	h[x]=tot;
}
I void dijskra();
int main(){
	//in(t);out(t);
	int x,y;
    _(n),_(m);
    for(R int i=1;i<=m;++i){
    	_(x),_(y);
    	add(x,y);
    	add(y,x);
	}
	dis[1]=0,dii[1]=1;
	for(R int i=2;i<=n;++i) dis[i]=inf;
	dijskra();
	for(R int i=1;i<=n;++i)
		printf("%d\n",dii[i]);
	return 0;
}
queue<int> q;
I void dijskra(){
	q.push(1);
	vis[1]=1;
	while(!q.empty()){
		int ts=q.front();
		vis[ts]=0;
		q.pop();
		for(R int i=h[ts];i;i=e[i].next){
			if(dis[e[i].to]>dis[ts]+1){
				dii[e[i].to]=dii[ts]%mod;
                dis[e[i].to]=dis[ts]+1;
                if(!vis[e[i].to]){
                    q.push(e[i].to);
                    vis[e[i].to]=1;
		    	}
				continue;
			}
			if(dis[e[i].to]==dis[ts]+1)
				dii[e[i].to]=(dii[e[i].to]+dii[ts])%mod;
		}
	}
}

