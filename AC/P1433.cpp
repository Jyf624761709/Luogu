#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<cmath>
const double inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n;bool p[17];double mi=inf,x[17],y[17];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mn(int a,int b){return a<b?a:b;}
I double ou(double x1,double y1,double x2,double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
I void dfs(int id,double s,int js){
	if(js==n){
		mi=s;
		return;
	}
	p[id]=1;
	for(R int i=1;i<=n;++i)
	    if(!p[i]&&s+ou(x[id],y[id],x[i],y[i])<mi){
	    	dfs(i,s+ou(x[id],y[id],x[i],y[i]),js+1);
	    }
	p[id]=0;
}
int main(){
	/*in(t);
	  out(t);*/
	rd(n);
	for(R int i=1;i<=n;++i)
	    scanf("%lf%lf",&x[i],&y[i]);
	for(R int i=1;i<=n;++i)
	    dfs(i,ou(0,0,x[i],y[i]),1);
	printf("%.2lf",mi);
	return 0;
}

