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
int mi=ine,n,m,c,mp[1002][1002],f[1002][1002];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
int main(){
    int x,y;
    /*in(t);
      out(t);*/
    read(n);read(m);read(c);
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j){
            read(mp[i][j]);
            f[i][j]=mp[i][j]+f[i][j-1];
        }
    for(int i=1;i<=n-c+1;++i)
        for(int j=1;j<=m-c+1;++j){
        	int s=0;
        	for(int k=i;k<=i+c-1;++k)
        	    s+=f[k][j+c-1]-f[k][j-1];
        	if(s>mi){
        		x=i;
        		y=j;
        	    mi=s;
        	}
        }
    printf("%d %d",x,y);
    return 0;
}

