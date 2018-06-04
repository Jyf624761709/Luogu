#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<cmath>
const int inf=2147483647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,-127,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
const ll ine=-23333333333ll;
template <typename _Tp> I void _(_Tp &x);
I ll mx(ll a,ll b){return a>b?a:b;}
ll m,d,t,f[300050][25],len;
I void add(ll x){
    ll j=log2(len);
    f[len][0]=x;
    for(R ll i=1;i<=j;++i)
        f[len][i]=mx(f[len][i-1],f[len-(1<<i-1)][i-1]);
}
I ll query(ll k){
    if(k==0) return 0;
    ll j=log2(k);
    return mx(f[len][j],f[len-k+(1<<j)][j]);
}
int main(){
    //in();out();
    char c;
    ll x;
    cin>>m>>d;
    m(f);
    while(m--){
    	cin>>c>>x;
    	if(c=='A'){
    		++len;
    		add((t+x)%d);
    		continue;
        }
        t=query(x);
        printf("%lld\n",t);
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
/*
#include<cstdio>
#include<iostream>
using namespace std;
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
typedef long long ll;
I ll mx(ll a,ll b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
ll d,t,ans[800800];
ll m,len;
I void update(ll p,ll k,ll l,ll r,ll nl){
    if(nl<l||r<nl) return;
    if(l==r){
        ans[p]=k;
        return;
    }
    ll mid=(l+r)>>1;
    update(ls(p),k,l,mid,nl);
    update(rs(p),k,mid+1,r,nl);
    ans[p]=mx(ans[ls(p)],ans[rs(p)]);
}
I ll query(ll p,ll l,ll r,ll nl,ll nr){
    if(nr<l||r<nl) return 0;
    if(nl<=l&&r<=nr) return ans[p];
    ll mid=(l+r)>>1;
    return mx(query(ls(p),l,mid,nl,nr),query(rs(p),mid+1,r,nl,nr));
}
int main(){
    char s;
    ll x;
    cin>>m>>d;
    int ttt=m;
    while(m--){
    	cin>>s>>x;
    	if(s=='A'){
    		++len;
    		update(1,(x+t)%d,1,ttt,len);
        }
        else{
            t=query(1,1,ttt,len-x+1,len);
            cout<<t<<endl;
        }
    }
    return 0;
}
*/

