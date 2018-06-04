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
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,m,a[100010],t;
string s;
priority_queue<int>qa;
priority_queue<int,vector<int>,greater<int> >qb;
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
	_(n);
	for(R int i=1;i<=n;++i){
		_(a[i]);
		qb.push(a[i]);
	}
	int tt=n>>1;
	if(n&1)
		++tt;
	for(R int i=1;i<=tt;++i){
		qa.push(qb.top());
		qb.pop();
	}
    scanf("%d\n",&m);
	for(R int i=1;i<=m;++i){
		cin>>s;
		if(s[0]=='m'){
			printf("%d\n",qa.top());
			continue;
		}
		cin>>t;
		if((qa.size()+qb.size())&1){
			if(qa.top()<t)
				qb.push(t);
			else{
				qb.push(qa.top());
				qa.pop();
				qa.push(t);
			}
		}
		else{
			if(t<qb.top())
				qa.push(t);
			else{
				qa.push(qb.top());
				qb.pop();
				qb.push(t);
			}
		}
	}
	return 0;
}
