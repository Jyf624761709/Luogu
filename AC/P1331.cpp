#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
#define R register
#define I inline
#define m(a) memset(a,0,sizeof(a))
const int inf=2147483647;
const int ine=-2147483647;
int n,m,fx[5]={-1,1,0,0},fy[5]={0,0,1,-1},js,ans;
char mp[1002][1002];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
int mxx,mxy,mnx,mny;
I int mx(int a,int b){return a>b?a:b;};I int mn(int a,int b){return a<b?a:b;};
I void dfs(int i,int j){
	mxx=mx(mxx,i);
	mxy=mx(mxy,j);
	mnx=mn(mnx,i);
	mny=mn(mny,j);
	++js;
	mp[i][j]='.';
	for(R int k=0;k<4;++k){
		int x=i+fx[k],y=j+fy[k];
		if(x<1||x>n||y<1||y>m||mp[x][y]=='.')
			continue;
		dfs(x,y);
	}
}
int main(){
	scanf("%d%d\n",&n,&m);
	for(R int i=1;i<=n;++i)
		scanf("%s\n",mp[i]+1);
	for(R int i=1;i<=n;++i)
		for(R int j=1;j<=m;++j)
			if(mp[i][j]=='#'){
				mxx=ine;
				mxy=ine;
				mnx=inf;
				mny=inf;
				js=0;
				dfs(i,j);
				if((mxx-mnx+1)*(mxy-mny+1)==js)
					++ans;
				else{
					printf("Bad placement.");
					return 0;
				}
			}
	printf("There are %d ships.",ans);
	return 0;
}

