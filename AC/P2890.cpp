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
int n,m,ad[3005],a,b,f[2005][2005];
char c,s[2005];
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
    scanf("%d%d\n",&n,&m);
    scanf("%s\n",s+1);
    for(R int i=1;i<=n;++i){
        scanf("%c %d%d\n",&c,&a,&b);
        ad[c-'a']=mn(a,b);
    }
    for(R int l=2;l<=m;++l)
        for(R int i=1;i+l-1<=m;++i){
            int j=i+l-1;
            if(s[i]==s[j])
                f[i][j]=f[i+1][j-1];
            else
                f[i][j]=mn(f[i+1][j]+ad[s[i]-'a'],f[i][j-1]+ad[s[j]-'a']);
        }
    printf("%d",f[1][m]);
    return 0;
}
