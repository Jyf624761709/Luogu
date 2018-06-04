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
#define in() freopen("polygon.in","r",stdin)
#define out() freopen("polygon.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
int n,a[1005],f[1005][1005][3];
char s[1005];
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}
I int mn(int a,int b){return a<b?a:b;}
int main(){
    scanf("%d\n",&n);
    for(R int i=1;i<=n;++i)
        scanf("%c %d ",&s[i],&a[i]),s[i+n]=s[i];
    for(R int i=1;i<=n;++i) f[i][i][0]=f[i+n][i+n][0]=f[i][i][1]=f[i+n][i+n][1]=a[i];
    for(R int l=2;l<=n;++l)
        for(R int i=1,j=l,a,b,c,d;j<n<<1;++i,++j){
            f[i][j][0]=-233333333;
            f[i][j][1]=233333333;
            for(R int k=i+1;k<=j;++k){
                a=f[i][k-1][0],b=f[i][k-1][1];
                c=f[k][j][0],d=f[k][j][1];
                if(s[k]=='t'){
                    f[i][j][0]=mx(f[i][j][0],a+c);
                    f[i][j][1]=mn(f[i][j][1],b+d);
                }
                else{
                    f[i][j][0]=mx(f[i][j][0],mx(mx(a*c,a*d),mx(b*c,b*d)));
                    f[i][j][1]=mn(f[i][j][1],mn(mn(a*c,a*d),mn(b*c,b*d)));
                }
            }
        }
    int ans=ine;
    for(R int i=1;i<=n;++i) ans=mx(ans,mx(f[i][i+n-1][0],f[i][i+n-1][1]));
    printf("%d\n",ans);
    for(R int i=1;i<=n;++i)
        if(mx(f[i][i+n-1][0],f[i][i+n-1][1])==ans)
            printf("%d ",i);
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1ll, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
