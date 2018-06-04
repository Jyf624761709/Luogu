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
int n,m,st[100010][40];
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void db();
I int query(int l,int r);
int main(){
    //in();out();
    int l,r;
	_(n),_(m);
	db();
	for(R int i=1;i<=m;++i){
		_(l),_(r);
		printf("%d ",query(l,r));
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
I void db(){
	for(R int i=1;i<=n;++i) 
		_(st[i][0]);
	for(R int j=1;(1<<j)<=n;++j)
	    for(R int i=1;i+(1<<j)-1<=n;++i)
	        st[i][j]=mn(st[i][j-1],st[i+(1<<(j-1))][j-1]);
}
I int query(int l,int r){
	int k=log2(r-l+1);
	return mn(st[l][k],st[r-(1<<k)+1][k]);
}

