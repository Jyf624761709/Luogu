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
int a[10],e[7]={0,1,2,3,5,10,20};
bool p[1002];
template <typename _Tp>
  I void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
void dfs(int id,int js){
	if(id>6){
		p[js]=1;
		return;
	}
	for(R int l=0;l<=a[id];++l){
		p[js+l*e[id]]=1;
		dfs(id+1,js+l*e[id]);
	}
}
int main(){
	/*in(t);
	  out(t);*/
	for(R int i=1;i<=6;++i)
	    read(a[i]);
	dfs(1,0);
	int ans=0;
	for(R int i=1;i<=1001;++i)
	    ans+=p[i];
	printf("Total=%d",ans);
	return 0;
}

