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
//inline
int n,m,f[2502][2502];
bool mp[2502][2502];
typedef long long ll;
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline bool check(int fx,int fy,int lx,int ly){
	for(register int i=fx;i<=lx;++i)
	    if(f[i][ly]-f[i][fy-1]!=1)
	        return false;
	bool p=1;
	for(register int i=fx,j=fy;i<=lx;++i,++j){
	    if(!mp[i][j]){
	        p=0;
	        break;
	    }
	}
	if(p==1) return true;
	for(register int i=lx,j=fy;i>=fx;--i,++j)
	    if(!mp[i][j])
	        return false;
	return true;
}
inline void work(){
	int i=n<m?n:m;
	while(i>0){
		for(register int j=1;j<=n-i+1;++j)
			for(register int k=1;k<=m-i+1;++k)
				if(check(j,k,j+i-1,k+i-1)){
				    printf("%d\n",i);
				    return;
				}
		--i;
	}
}
int main(){
	/*in(t);
	  out(t);*/
	while(scanf("%d%d",&n,&m)!=EOF){
		for(register int i=1;i<=n;++i)
			for(register int j=1;j<=m;++j){
				read(mp[i][j]);
				f[i][j]=f[i][j-1]+mp[i][j];
			}
		work();
		m(f);
	}
	return 0;
}


