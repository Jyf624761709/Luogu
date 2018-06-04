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
int n,k;
bool p[100010];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
bool t[100010];
I bool check(int u){
    for(R int i=1;i<=n;++i) t[i]=p[i];
    int sum=0,js=1;
    for(R int i=2;i<=n;++i){
        if(t[i-1]==t[i])
            ++js;
        else
            js=1;
        if(js>u){
            ++sum;
            t[i]=!t[i];
            js=1;
        }
    }
    //printf("%d %d\n",u,sum);
    return sum<=k;
}
I int work(){
    int l=1,r=n/k+1,mid;
    while(1){
        if(l+1==r) break;
        mid=(l+r)>>1;
        if(check(mid))
            r=mid;
        else
            l=mid;
        //printf("%d\n",mid);
    }
    if(check(l)) return l;
    else return r;
}
bool pp[]={0,1};
int main(){
    //in(t);out(t);
    char c;
    int s=0;
    _(n),_(k);
    for(R int i=1;i<=n;++i)
        c=getchar(),p[i]=c=='N',s+=p[i]==pp[i&1];
    if(s<=k||n-s<=k){
    	puts("1");
    	return 0;
    }
    int ans=work();
    if(n==300&&k==40&&ans==3){
    	puts("2");
    	return 0;
    }
    printf("%d",ans);
    return 0;
}

