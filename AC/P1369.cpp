#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,x[105][105],s[105][105],ans=ine;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in(t);out(t);
    int u,o,m;
    _(n);
    for(R int i=1;i<=n;++i)
        _(u),_(o),++x[o][u];
    for(R int i=1;i<=100;++i)
        for(R int j=1;j<=100;++j)
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+x[i][j];
    for(R int i=1;i<=100;++i)
        for(R int j=i+1;j<=100;++j)
            for(R int k=1;k<=100;++k)
        		for(R int l=k+1;l<=100;++l){
        			m=s[j][l]-s[j][l-1]-s[i-1][l]+s[i-1][l-1];
        			m+=s[j][k]-s[j][k-1]-s[i-1][k]+s[i-1][k-1];
        			m+=s[i][l-1]-s[i][k]-s[i-1][l-1]+s[i-1][k];
        			m+=s[j][l-1]-s[j][k]-s[j-1][l-1]+s[j-1][k];
        			ans=mx(ans,m);
                }
    printf("%d",ans);
    return 0;
}

