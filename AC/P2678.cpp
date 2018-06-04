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
typedef long long ll;
int el,n,m,s[50005];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline bool judge(int f){
	int js=0;
	for(int i=0;i<=n;++i)
	    for(int j=i+1;j<=n+1;++j){
	    	if(s[j]-s[i]>=f){
	    		i=j-1;
	    	    break;
	    	}
	    	++js;
	    }
	return js<=m;
}
int main(){
	/*in(t);
	  out(t);*/
	read(el);read(n);read(m);
	s[0]=0;
	s[n+1]=el;
	for(int i=1;i<=n;i++)
	    read(s[i]);
	int l=1,r=el,mid;
	while(1){
		if(l+1==r)
		    break;
		mid=(l+r)>>1;
		if(judge(mid)==true)
		    l=mid;
		else
		    r=mid;
	}
	if(judge(r))
	    printf("%d",r);
	else
	    printf("%d",l);
	return 0;
}


