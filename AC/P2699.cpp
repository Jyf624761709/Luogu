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
typedef unsigned long long ull;
ull l,r,w,ans=1;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    /*in();out();*/
    cin>>l>>r>>w;
    bool p=0;
    if(w==1){
        if(l==1) puts("1");
        else puts("-1");
        return 0;
    }
    for(R int i=0;;++i){
    	if(l<=ans){
    	    cout<<ans<<" ";
    	    p=1;
    	}
    	if(ans>r/w) break;
    	ans*=w;
    }
    if(!p) puts("-1");
    return 0;
}
