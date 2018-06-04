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
//inline
typedef long long ll;
int n;
bool jl[10005];
struct cow{
    int g,d;
}m[10005];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline bool cmp(cow a,cow b){
    if(a.g==b.g) return a.d>b.d;
    return a.g>b.g;
}
int main(){
    /*in(t);
      out(t);*/
    int ans=0;
    read(n);
    for(int i=1;i<=n;i++){
        read(m[i].g);
        read(m[i].d);
    }
    sort(m+1,m+1+n,cmp);
    for(int i=1;i<=n;++i){
        int id=0;
        for(int j=m[i].d;j>=1;--j)
            if(!jl[j]){
            	id=j;
            	jl[j]=1;
            	break;
            }
        if(id>0)
            ans+=m[i].g;
    }
    printf("%d",ans);
    return 0;
}

