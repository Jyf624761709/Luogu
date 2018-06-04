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
int n,m,t,bx,by;
struct KFC{
    int fx,fy;
}f[1010];
string s;
bool p[55][55][1010];
char mp[55][55];
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void dfs(int x,int y,int now){
    if(p[x][y][now]) return;
    p[x][y][now]=1;
    if(now>t){
        mp[x][y]='*';
        return;
    }
    while(x>0&&x<=n&&y>0&&y<=m){
        x+=f[now].fx;
        y+=f[now].fy;
        if(mp[x][y]!='X')
            dfs(x,y,now+1);
        else
            return;
    }
}
int main(){
    //in();out();
    scanf("%d%d\n",&n,&m);
    for(R int i=1;i<=n;++i) scanf("%s\n",mp[i]+1);
    scanf("%d",&t);
    for(R int i=1;i<=t;++i){
        cin>>s;
        if(s=="NORTH")
            f[i]=((KFC){-1,0});
        else if(s=="SOUTH")
            f[i]=((KFC){1,0});
        else if(s=="EAST")
            f[i]=((KFC){0,1});
        else if(s=="WEST")
            f[i]=((KFC){0,-1});
    }
    for(R int i=1;i<=n;++i){
        for(R int j=1;j<=m;++j)
        	if(mp[i][j]=='*'){
        	    bx=i,by=j;
        	    mp[i][j]='.';
        	    break;
            }
        if(bx>0)
            break;
    }
    dfs(bx,by,1);
    for(R int i=1;i<=n;++i){
        for(R int j=1;j<=m;++j)
            putchar(mp[i][j]);
        puts("");
    }
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

