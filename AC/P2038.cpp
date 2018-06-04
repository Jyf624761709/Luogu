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
int d,n,x,y,k,mp[130][130];
int ansa=ine,ansb=ine;
template <typename _Tp>
  I void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I void work(){
	for(R int i=0;i<=128;++i)
	    for(R int j=0;j<=128;++j){
	    	int jsb=0;
	        for(R int k=i-d;k<=i+d;++k)
	            for(R int l=j-d;l<=j+d;++l){
	            	if(k<0||k>128||l<0||l>128) continue;
	                if(mp[k][l]>0)
	                	jsb+=mp[k][l];
	            }
	        if(jsb==ansb)
	            ++ansa;  
	        if(ansb<jsb){
	        	ansb=jsb;
	        	ansa=1;
	        }
	    }
}
int main(){
	/*in(t);
	  out(t);*/
	read(d);read(n);
	for(R int i=1;i<=n;++i){
		read(x);read(y);read(k);
		mp[x][y]=k;
	}
	work();
	printf("%d %d",ansa,ansb);
	return 0;
}

