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
int n,m,x,w[1005],vn[1005],vm[1005],f[1005][1005];
typedef long long ll;
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
inline int mx(int a,int b){
    return a>b?a:b;
}
int main(){
    /*in(t);
      out(t);*/
    read(n);read(m);read(x);
    for(register int i=1;i<=n;i++){
        read(w[i]);
        read(vn[i]);
        read(vm[i]);
    }
    for(register int i=1;i<=n;i++)
        for(register int j=m;j>=vn[i];j--)
            for(register int k=x;k>=vm[i];k--)
                f[j][k]=mx(f[j][k],f[j-vn[i]][k-vm[i]]+w[i]);
    printf("%d",f[m][x]);
    return 0;
}

