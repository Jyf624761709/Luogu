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
#define I inline
#define R register
typedef long long ll;
int n,b[300005],c[300005],ans,ma=ine;
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in(t);out(t);
    rd(n);
    for(R int i=1;i<=n;++i)
        rd(b[i]);
    sort(b+1,b+1+n);
    for(R int i=1;i<=n;++i)
        c[i]=b[i]+n-i+1,ma=mx(ma,c[i]);
    for(R int i=1;i<=n;++i)
        if(b[i]+n>=ma)
            ++ans;
    cout<<ans;
    return 0;
}

