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
int n,m,r,x,y;
bool p[210][210];
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int len(int x1,int y1,int x2,int y2){
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}
I void add(int x,int y){
    for(R int i=1;i<=n;++i)
        for(R int j=1;j<=n;++j)
            if(len(x,y,i,j)<=r*r)
                p[i][j]=1;
}
int main(){
    //in();out();
    _(n),_(m),_(r);
    while(m--){
    	_(x),_(y);
    	add(x,y);
    }
    int ans=0;
    for(R int i=1;i<=n;++i)
        for(R int j=1;j<=n;++j)
            ans+=p[i][j];
    cout<<ans;
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

