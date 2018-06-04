#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
const ll inf=2147483647ll;
const ll ine=-2147482647ll;
const int N=1000010;
int n;
ll h[N],v[N],ans[N];
int top=0;
struct KFC{
    int id;
    ll h;
}s[N];
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in(t);out(t);
    _(n);
    for(R int i=1;i<=n;++i)
        _(h[i]),_(v[i]);
    for(R int i=1;i<=n;++i){
    	if(top==0){
    		s[++top].id=i;
    		s[top].h=h[i];
    		continue;
        }
        for(R int j=top;j>0;--j)
            if(s[j].h>h[i]){
            	ans[s[j].id]+=v[i];
            	break;
            }
        while(1){
            if(h[i]>=s[top].h){
                s[top].h=h[i];
                s[top--].id=i;
                if(top==0){
                    ++top;
                    break;
                }
            }
            else{
                s[++top].h=h[i];
                s[top].id=i;
                break;
            }
        }
    }
    top=0;
    for(R int i=n;i>0;--i){
    	if(top==0){
    		s[++top].id=i;
    		s[top].h=h[i];
    		continue;
        }
        for(R int j=top;j>0;--j)
            if(s[j].h>h[i]){
            	ans[s[j].id]+=v[i];
            	break;
            }
        while(1){
            if(h[i]>=s[top].h){
                s[top].h=h[i];
                s[top--].id=i;
                if(top==0){
                    ++top;
                    break;
                }
            }
            else{
                s[++top].h=h[i];
                s[top].id=i;
                break;
            }
        }
    }
    ll sss=ine;
    for(R int i=1;i<=n;++i)
        sss=mx(sss,ans[i]);
    cout<<sss;
    return 0;
}

