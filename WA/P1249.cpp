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
typedef unsigned long long ull;
int n,f[10000010],js;
string ans="1";
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I string ch(string a1,string b1){
    int a[100009],b[100009],i,x,len,j,c[100009];
    a[0]=a1.size();b[0]=b1.size();
    for(i=1;i<=a[0];++i)a[i]=a1[a[0]-i]-'0';
    for(i=1;i<=b[0];++i)b[i]=b1[b[0]-i]-'0';
    for(i=1;i<=a[0];++i)
	    for(j=1;j<=b[0];++j)
		    c[i+j-1]+=a[i]*b[j];
    len=a[0]+b[0];                                       
    for(i=1;i<len;++i)if(c[i]>9){c[i+1]+=c[i]/10;c[i]%=10;}
    while(c[len]==0&&len>1)--len;
    string ttt="";
    for(i=len;i>=1;--i)ttt+=c[len-i+1];
    return ttt;
}
int main(){
	//in(t);out(t);
	/*ll t;
    _(n);
    for(R ll i=2;;++i){
    	f[++js]=i;
    	n-=i;
    	if(n<0){
    		t=n+i;
    		--js;
    		break;
		}
		if(n==0){
			for(R int i=1;i<=js;++i){
                printf("%lld ",f[i]);
                ans*=(ull)f[i];
			}
			puts("");
			cout<<ans;
            return 0;
		}
	}
	for(R ll i=js;t>0;--i,--t)
	    ++f[i];
    for(R ll i=1;i<=js;++i){
        printf("%lld ",f[i]);
        ans=
	}
    puts("");*/
    string a,b;
    cin>>a>>b;
    cout<<ch(a,b);
	return 0;
}


