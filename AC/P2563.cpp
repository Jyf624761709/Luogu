#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<vector>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int js=0,p[205],f[205],n;
bool pd[205];
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void prime(){
	pd[0]=1;
	pd[1]=1;
	for(R int i=2;i<=200;++i)
	    if(!pd[i]){
	    	p[++js]=i;
	    	for(R int j=i<<1;j<=200;j+=i)
	    	    pd[j]=1;
	    }
}
int main(){
	/*in();out();*/
	prime();
	f[0]=1;
	for(R int i=1;i<=js;++i)
	    for(R int j=p[i];j<=200;++j)
	    	f[j]+=f[j-p[i]];
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",f[n]);
	return 0;
}

