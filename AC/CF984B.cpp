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
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
int n,m,s;
char c[110][110];
int fx[]={1,0,0,-1,-1,-1,1,1},fy[]={0,1,-1,0,-1,1,-1,1};
I int check(int x,int y){
    int tx,ty,ans=0;
    for(R int i=0;i<8;++i){
        tx=x+fx[i],ty=y+fy[i];
        if(tx>0&&ty>0&&tx<=n&&ty<=m)
            ans+=c[tx][ty]=='*';
    }
    return ans;
}
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    scanf("%d %d\n",&n,&m);
    for(R int i=1;i<=n;++i) scanf("%s\n",c[i]+1);
    for(R int i=1;i<=n;++i)
        for(R int j=1;j<=m;++j){
            if(c[i][j]=='*') continue;
            s=check(i,j);
            if(c[i][j]=='.')
                if(s>0){
                    puts("NO");
                    return 0;
                }
            if('0'<=c[i][j]&&c[i][j]<='9')
                if(s!=c[i][j]-'0'){
                    puts("NO");
                    return 0;
                }
        }
    puts("YES");
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

