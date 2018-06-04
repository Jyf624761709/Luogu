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
int n,a[1005],ans[23423]={1},js,l;
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
    //in();out();
    _(n);
    while(1){
    	if(js+2>n) break;
    	a[++js]=js+1;
    	n-=js+1;
    }
    while(1){
        for(R int i=js;i>=1;--i){
            if(n==0) break;
            ++a[i];
            --n;
        }
        if(n==0) break;
    }
    for(R int i=1;i<=js;++i) printf("%d ",a[i]);
    puts("");
    int jw;
    for(R int i=1;i<=js;++i){
        jw=0;
        for(R int j=0;j<=l;++j){
            ans[j]=ans[j]*a[i]+jw;
            jw=ans[j]/10;
            ans[j]%=10;
        }
        while(jw)
            ans[++l]=jw%10,jw/=10;
    }
    for(R int j=l;j>-1;--j) printf("%d",ans[j]); /**/
    return 0;
}

