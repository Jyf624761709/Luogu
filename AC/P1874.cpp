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
#define m(a) memset(a,127,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,f[43][100005],len,g[45][45];
char s[43];
bool p[43][100005];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int pw(int n){
	int ss=1;
	while(n--) ss*=10;
	return ss;
}
int main(){
    //in(t);out(t);
    scanf("%s %d",s+1,&n);len=strlen(s+1);int ans=inf;
    for(R int i=1;i<=len;++i)
        for(R int j=i;j<=len;++j){
            if(j==i){
            	g[i][i]=s[i]-'0';
            	continue;
			}
			g[i][j]=g[i][j-1]*10+s[j]-'0';
		}
	for(int i=0;i<=len;i++)  
        for(int j=0;j<=n;j++)  
            f[i][j]=inf;
    f[0][0]=0;
    p[0][0]=1;
    for(R int i=1;i<=len;++i){
    	for(R int j=1;j<=i;++j){
    	    for(R int k=0;k<=n;++k){
    	    	if(g[i-j+1][i]>n) break;
    	    	if(p[i-j][k]){
    	            if(k+g[i-j+1][i]>n) break;
    	            p[i][k+g[i-j+1][i]]=1;
    	            f[i][k+g[i-j+1][i]]=mn(f[i][k+g[i-j+1][i]],f[i-j][k]+1);
				}
			}
		}
	}
	if(f[len][n]<inf)cout<<f[len][n]-1;
	else cout<<-1;
    return 0;
}

