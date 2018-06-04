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
int n,m;
struct KFC{
	int turn;
	char name[13];
}toy[100005];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
	/*in(t);
	  out(t);*/
	rd(n);rd(m);
	for(R int i=1;i<=n;++i)
		scanf("%d %s\n",&toy[i].turn,toy[i].name);
	int h,ud=1,z;
	for(R int u=1;u<=m;++u){
		scanf("%d%d",&z,&h);
		h%=n;
		if(toy[ud].turn==0){
		    if(z==0)
			    ud=(ud+n-h-1)%n+1;
		    if(z==1)
			    ud=(ud+h-1)%n+1;
		}
	    else{
	        if(z==0)
			    ud=(ud+h-1)%n+1;
		    if(z==1)
			    ud=(ud+n-h-1)%n+1;
	    }
	}
	printf("%s",toy[ud].name);
	return 0;
}

