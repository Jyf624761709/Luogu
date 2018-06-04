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
int n;
double a[110],ans;
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
    scanf("%d",&n);
    for(R int i=1;i<=n;++i) scanf("%lf",&a[i]);
    ans=(a[n]-a[1])/(n-1);
    int i=(int)(ans*10),j=(int)(ans*100),k=(int)(ans*1000);
    if(i%10==0&&j%10==0&&k%10==0){
    	printf("%.0lf",ans);
    	return 0;
	}
	printf("%.3lf",ans);
    return 0;
}

