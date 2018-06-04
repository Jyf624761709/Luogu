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
//register
typedef long long ll;
int n,h[105],a[105],b[105];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline int mx(int a,int b){
	return a>b?a:b;
}
inline int dp(int f){
	int num[105];
	for(register int i=1;i<=f;++i){
		num[i]=1;
		for(register int j=1;j<i;++j)
		    if(h[j]<h[i])
		        num[i]=mx(num[i],num[j]+1);
	}
	int mf=0;
    for(register int i=1;i<=f;i++)
        mf=mx(mf,num[i]);
    for(register int i=f+1;i<=n;++i){
		num[i]=1;
		for(register int j=f+1;j<i;++j)
		    if(h[j]>h[i])
		        num[i]=mx(num[i],num[j]+1);
	}
	int mb=0;
    for(int i=f+1;i<=n;i++)
        mb=mx(mb,num[i]);
    return mf+mb;
}
int main(){
	//in(t);out(t);
	int t[105],ans=ine;
	read(n);
	for(register int i=1;i<=n;++i)
	    read(h[i]);
	for(register int i=1;i<=n;++i){
		int js=0;
		for(register int j=1;j<=i;++j)
		    a[j]=h[j];
		for(register int j=i;j<=n;++j)
		    b[j]=h[j];
		ans=mx(dp(i),ans);
	}
	printf("%d",n-ans);
	return 0;
}

