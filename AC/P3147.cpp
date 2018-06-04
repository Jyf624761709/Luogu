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
int n,s[300010],a[300010],top,ans=ine;
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void push(int x){
    s[++top]=x;
	if(top==0)
		return;
	for(R int& i=top;i>0&&s[i]==s[i-1];--i)
	    s[i-1]=s[i]+1;
}
int main(){
    //in();out();
    _(n);
    for(R int i=1;i<=n;++i) _(a[i]);
    for(R int i=1;i<=n;++i) push(a[i]);
    for(R int i=1;i<=top;++i) ans=mx(ans,s[i]);
    top=0;
    for(R int i=n;i>0;--i) push(a[i]);
    for(R int i=1;i<=top;++i) ans=mx(ans,s[i]);
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

