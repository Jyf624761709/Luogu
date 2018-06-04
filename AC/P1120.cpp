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
const int N=70;
bool p[N];
int n,w[N],key;
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I bool cmp(int a,int b){ return a>b;}
bool used[N];
I void dfs(int id,int s,int left){
	if(s==0&&left==0){
		printf("%d",key);
		exit(0);
	}
	if(s==0){
		dfs(1,key,left);
		return;
	}
	if(left==0||s-w[n]<0) return;
	for(R int i=id;i<=n;++i)
		if(s-w[i]>=0&&!used[i]){
			used[i]=1;
			dfs(i,s-w[i],left-1);
			used[i]=0;
			if(s-w[i]==0||s==key)break;
			while(w[i]==w[i+1]) i++;
		}
}
int main(){
	rd(n);
	int s=0,a,ma=ine,maxx=0;
	for(R int i=1;i<=n;++i){
		rd(a);
		if(a<=50){
			w[++s]=a;
			ma=mx(ma,a);
			maxx+=a;
		}
	}
	n=s;
	sort(w+1,w+1+n,cmp);
	for(R int i=ma;i<=maxx>>1;++i){
		if(maxx%i>0) continue;
		key=i;
		m(used);
		dfs(1,i,n);
	}
	printf("%d",maxx);
	return 0;
}
