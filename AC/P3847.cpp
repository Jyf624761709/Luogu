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
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,s[3005],f[3005][3005];
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
    _(n);
    for(R int i=1;i<=n;++i) _(s[i]);
    for(R int l=2;l<=n;++l)
        for(R int i=1;i+l-1<=n;++i){
            int j=i+l-1;
            if(s[i]==s[j])
                f[i][j]=f[i+1][j-1];
            else
                f[i][j]=mn(f[i+1][j],mn(f[i][j-1],f[i+1][j-1]))+1;
        }
    printf("%d",f[1][n]);
    return 0;
}

