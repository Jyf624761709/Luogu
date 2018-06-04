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
int n,m,l[1005],x,y,z;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int nn(int s,int e){
    int a[1005];
    for(R int i=s;i<=e;++i)
       a[i]=l[i];
    int mxn=ine,id,js=0;
    sort(a+s,a+e+1);
    for(R int i=s;i<=e;++i){
        ++js;
        if(a[i]!=a[i+1]||i==e){
            if(mxn<js){
                mxn=js;
                id=a[i];
            }
            js=0;
        }
    }
    return id;
}
int main(){
    /*in();out();*/
    _(n),_(m);
    for(R int i=1;i<=n;++i)
        _(l[i]);
    for(R int i=1;i<=m;++i){
    	_(x),_(y),_(z);
    	if(!x)
    		printf("%d\n",nn(y,z));
    	else
    	    l[y]=z;
    }
    return 0;
}
