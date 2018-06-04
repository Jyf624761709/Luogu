#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXX=2147483647;
const int MINN=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
inline int mn(int a,int b){
	return a<b?a:b;
}
int n,vt,v[35],lv=MAXX;
void dfs(int i,int js){
	if(i>n){
		lv=mn(js,lv);
		return;
	}
	if(js>=v[i])
	    dfs(i+1,js-v[i]);
	dfs(i+1,js);
}
int main(){
	/*in(t);
	  out(t);*/
	scanf("%d%d",&vt,&n);
	for(int i=1;i<=n;i++)
	    scanf("%d",&v[i]);
	dfs(1,vt);
	printf("%d",lv);
	return 0;
}


