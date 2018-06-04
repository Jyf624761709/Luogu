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
int n,m,p,q,f[1010],e[1010];
char c; 
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int _f(int a){
    if(f[a]!=a) f[a]=_f(f[a]);
    return f[a];
}
I void un(int x,int y){
    f[_f(x)]=_f(y);
}
int main(){
    //in(t);out(t);
    _(n),_(m);
    for(R int i=1;i<=n;++i) f[i]=i;
    for(R int i=1;i<=m;++i){
    	cin>>c>>p>>q;
    	if(c=='F'){
    	    un(p,q);
            continue;
        }
    	if(e[p]==0) e[p]=_f(q);
    	else un(q,e[p]);
    	if(e[q]==0) e[q]=_f(p);
    	else un(p,e[q]);
    }
    int ans=0;
    for(R int i=1;i<=n;++i) ans+=f[i]==i;
    printf("%d",ans);
    return 0;
}

