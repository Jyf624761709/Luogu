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
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int t,x,y;
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
bool p[10000005];
int mp[10000005];
I int bfs(){
	m(p);m(mp);
	queue<int>q;
	q.push(x);
	p[x]=1;
	while(!q.empty()){
		int tmp=q.front();
		q.pop();
		if(tmp==y)
			return mp[y];
		if(tmp-1>0&&!p[tmp-1]){
			q.push(tmp-1);
			mp[tmp-1]=mp[tmp]+1;
			p[tmp-1]=1;
		}
		if(!p[tmp+1]&&tmp+1<=1000000){
			q.push(tmp+1);
			mp[tmp+1]=mp[tmp]+1;
			p[tmp+1]=1;
		}
		if(!p[tmp<<1]&&tmp<<1<=1000000){
			q.push(tmp<<1);
			mp[tmp<<1]=mp[tmp]+1;
			p[tmp<<1]=1;
		}
	}
	return -1;
}
int main(){
	rd(t);
	while(t--){
		rd(x);rd(y);
		printf("%d\n",bfs());
	}
	return 0;
}

