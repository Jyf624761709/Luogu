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
int n,k,a,b,y[2005][2005],s[2005][2005];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void db(){
    for(R int i=0;i<=2000;++i) y[i][0]=1;
    for(R int i=1;i<=2000;++i){
        for(R int j=1;j<=i;++j){
            y[i][j]=(y[i-1][j]+y[i-1][j-1])%k;
            //printf("%d ",y[i][j]);
        }
        //puts("");
    }
    for(R int i=0;i<=2000;++i){
        for(R int j=0;j<=2000;++j){
        	s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1];
        	if(y[i][j]==0&&j<=i)
                ++s[i][j];
        }
    }
}
int main(){
    //in(t);out(t);
    _(n),_(k);
    db();
    for(R int i=1;i<=n;++i){
        _(a),_(b);
        b=mn(a,b);
        printf("%d\n",s[a][b]);
    }
    return 0;
}

