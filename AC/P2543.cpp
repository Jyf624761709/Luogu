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
typedef long long ll;
int f[9999][9999],l1,l2;
char a[10005],b[10005];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in(t);out(t);
    scanf("%s\n%s",a,b);
    l1=strlen(a),l2=strlen(b);
    for(R int i=1;i<=l1;++i)
        for(R int j=1;j<=l2;++j)
           if(a[i-1]==b[j-1]) f[i][j]=f[i-1][j-1]+1;
           else f[i][j]=mx(f[i-1][j],f[i][j-1]);
    printf("%d",f[l1][l2]);
    return 0;
}

