#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define I inline
#define R register
const int inf=2147483647;
const int ine=-2147483647;
using namespace std;
typedef long long ll;
const int N=1002;
int n,t,sum[N][N];
bool mp[N][N];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
int main(){
    char c;
    read(n);read(t);
    int x,y;
    memset(mp,1,sizeof(mp));
    for(R int i=1;i<=t;++i){
        read(x);read(y);
        mp[x][y]=0;
    }
    for(R int i=1;i<=n;++i)
        for(R int j=1;j<=n;++j)
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+mp[i][j];
    for(R int i=n;i>0;--i){
        int js=0;
        for(R int j=1;j<=n-i+1;++j)
            for(R int k=1;k<=n-i+1;++k)
                if(sum[j+i-1][k+i-1]-sum[j+i-1][k-1]-sum[j-1][k+i-1]+sum[j-1][k-1]==i*i)
                    ++js;
        if(js){
            printf("%d",i);
            return 0;
        }
    }
}

