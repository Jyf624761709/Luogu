#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<cmath>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
char a[2005],b[2005];
int f[2005][2005],n,m;
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    scanf("%s\n%s",a,b);
    n=strlen(a),m=strlen(b);
    for(R int i=1;i<=n;++i)
        f[i][0]=i;
    for(R int i=1;i<=m;++i)
        f[0][i]=i;
    for(R int i=1;i<=n;++i)
    	for(R int j=1;j<=m;++j)
    	    if(a[i-1]==b[j-1]) f[i][j]=f[i-1][j-1];
    	    else f[i][j]=mn(mn(f[i-1][j],f[i][j-1]),f[i-1][j-1])+1;
    printf("%d",f[n][m]);
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }

