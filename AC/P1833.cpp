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
int ts,n,t,c,p,f[205];
template <typename _Tp>
  I void read(_Tp &x){
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
	int f1,l1,f2,l2;
	scanf("%d:%d",&f1,&l1);scanf("%d:%d",&f2,&l2);scanf("%d",&n);
	ts=f2*60+l2-f1*60-l1;
	for(R int i=1;i<=n;++i){
		read(t);read(c);read(p);
		if(p==0)
			for(R int j=t;j<=ts;++j)
			    f[j]=mx(f[j],f[j-t]+c);
		if(p>0)
		    for(R int k=0;k<p;++k)
		        for(R int j=ts;j>=t;--j)
			        f[j]=mx(f[j],f[j-t]+c);
	}
	printf("%d",f[ts]);
	return 0;
}

