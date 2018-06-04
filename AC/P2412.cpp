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
#define I inline
#define R register
typedef long long ll;
int n,m;
struct KFC{
    string na,k;
    int id;
}name[50005];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I bool cmp(KFC a,KFC b){
    if(a.k.size()==b.k.size()&&a.k==b.k) return a.id>b.id;
    return a.k>b.k;
}
int main(){
    /*in();out();*/
    ios::sync_with_stdio(false);
    int l,r,le;
    cin>>n>>m;
    for(R int o=1;o<=n;++o){
    	cin>>name[o].na;
    	name[o].k="";
    	le=name[o].na.length();
    	for(R int i=0;i<le;++i){
    		name[o].k+=name[o].na[i];
    		if('a'<=name[o].k[i]&&name[o].k[i]<='z')
    		    name[o].k[i]-='a'-'A';
    	}
    	name[o].id=o;
    }
    sort(name+1,name+1+n,cmp);
    for(R int i=1;i<=m;++i){
    	cin>>l>>r;
    	for(R int j=1;j<=n;++j)
    	    if(l<=name[j].id&&name[j].id<=r){
    	    	cout<<name[j].na<<endl;
    	    	break;
    	    }
    }
    return 0;
}
