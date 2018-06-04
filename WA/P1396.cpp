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
int n,m,s,l,tot,ans=inf,dis[10005],u[10005];
bool p[10005];
struct KFC{
	int next,v,w;
}e[20005];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void STAR(int x,int y,int q){
	e[++tot].next=u[x];
	e[tot].v=y;
	e[tot].w=q;
	u[x]=tot;
}
I void spfa(){
	queue<int> q;
	q.push(s);
	p[s]=1;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		p[t]=0;
		for(R int i=u[t];i;i=e[i].next){
			dis[e[i].v]=ine;
			int ma=mx(e[i].w,dis[t]);
			if(dis[e[i].v]<ma){
				dis[e[i].v]=ma;
				if(!p[e[i].v]){
					q.push(e[i].v);
					p[e[i].v]=1;
				}
			}
		    if(e[i].v==l)
		        ans=mn(ans,dis[l]);
		}
	}
}
int main(){
	/*in();out();*/
    int a,b,c;
    _(n);_(m);_(s);_(l);
    for(R int i=1;i<=n;++i)
        dis[i]=ine;
    dis[s]=0;
    for(R int i=1;i<=m;++i){
    	_(a);_(b);_(c);
    	STAR(a,b,c);
    }
    spfa();
    printf("%d",ans);
	return 0;
}

