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
map<string,string> f;
string t,a;
char c;
I string find(string x){
    if(f[x]!=x) f[x]=find(f[x]);
    return f[x];
}
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    while(1){
    	cin>>c;
    	if(c=='$') return 0;
    	if(c=='#'){
    		cin>>t;
    		if(f[t]=="") f[t]=t;
    		continue;
        }
    	if(c=='?'){
    		cin>>a;
    		cout<<a<<" "<<find(a)<<endl;
    		continue;
        }
    	cin>>a;
        f[a]=find(t);
    }
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }

