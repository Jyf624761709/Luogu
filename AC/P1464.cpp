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
#define m(a) memset(a,-1,sizeof(a))
//inline
//register
typedef long long ll;
ll f[22][22][22];
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
ll dfs(ll a,ll b,ll c){
    if(a<=0||b<=0||c<=0)
        return f[0][0][0]=1;
    if(f[a][b][c]!=-1) 
        return f[a][b][c];
    if(a>20||b>20||c>20)
        return f[a][b][c]=dfs(20,20,20);
    if(a<b&&b<c)
        return f[a][b][c]=dfs(a,b,c-1)+dfs(a,b-1,c-1)-dfs(a,b-1,c);
    return f[a][b][c]=dfs(a-1,b,c)+dfs(a-1,b-1,c)+dfs(a-1,b,c-1)-dfs(a-1,b-1,c-1);
}
int main(){
    /*in(t);
      out(t);*/
    ll a,b,c;
    while(1){
        read(a);read(b);read(c);
        if(a==-1&&b==-1&&c==-1)
            return 0;
        m(f);
        printf("w(%lld, %lld, %lld) = ",a,b,c);
        if(a>20) a=21;
        if(b>20) b=21;
        if(c>20) c=21;/**/
        printf("%lld\n",dfs(a,b,c));
    }
}

