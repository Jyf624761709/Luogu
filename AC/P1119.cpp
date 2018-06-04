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
#define m(a) memset(a,0x3f,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
int n,m,q,t[100010],f[5005][5005],tot;
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    int x,y,c;
    m(f);
    _(n),_(m);
    for(R int i=0;i<n;++i)
        _(t[i]),f[i][i]=0;
    while(m--){
    	_(x),_(y),_(c);
    	f[x][y]=f[y][x]=c;
    }
    _(q);
    while(q--){
        _(x),_(y),_(c);
        while(t[tot]<=c&&tot<n){
        	for(R int i=0;i<n;++i)
        	    for(R int j=0;j<n;++j)
        	        f[i][j]=mn(f[i][j],f[i][tot]+f[tot][j]);
        	++tot;
        }
        if(f[x][y]==0x3f3f3f3f||t[x]>c||t[y]>c)
            puts("-1");
        else
            printf("%d\n",f[x][y]);
    }
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

