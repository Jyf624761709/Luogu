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
#define in() freopen(".in","r",stdin)
#define out() freopen(".out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
#define gc() getchar()
typedef long long ll;
/*char ss[1<<17],*A=ss,*B=ss;
I char gc(){return A==B&&(B=(A=ss)+fread(ss,1,1<<17,stdin),A==B)?EOF:*A++;}*/
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int num[100055],a[100055],b[100055],n;
int main(){
    //in();out();
    int kkk;
    _(n);
    for(R int i=1;i<=n;++i) _(kkk),a[kkk]=i;
    for(R int i=1;i<=n;++i) _(b[i]);
    num[1]=a[b[1]];
    int len=1;
    for(R int i=2;i<=n;++i){
    	if(num[len]<a[b[i]]){
    		num[++len]=a[b[i]];
            continue;
		}
        int pos=lower_bound(num+1,num+len+1,a[b[i]])-num;
        num[pos]=a[b[i]];
    }
    printf("%d",len);
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=gc();
      if (c=='-') w=-1ll, c=gc();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=gc();
      x*=w;
  }
