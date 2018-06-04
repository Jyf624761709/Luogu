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
int n,a[50000],t[50000],ans;
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void gb(int a[],int l,int r){
    if(l==r) return;
    int mid=(l+r)>>1,i=l,j=mid+1,p=l;
    gb(a,l,mid);
    gb(a,mid+1,r);
    while(i<=mid&&j<=r){
        if(a[i]>a[j]){
            t[p++]=a[j++];
            ans+=mid-i+1;
        }
        else
            t[p++]=a[i++];
    }
    while(i<=mid) t[p++]=a[i++];
    while(j<=r) t[p++]=a[j++];
    for(R int i=l;i<=r;++i) a[i]=t[i];
}
int main(){
    //in();out();
    _(n);
    for(R int i=1;i<=n;++i) _(a[i]);
    gb(a,1,n);
    printf("%d",ans);
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

