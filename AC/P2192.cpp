#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXN=2147483647;
const int MINN=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int main(){
	int n,s=0,a[5]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int t;
		scanf("%d",&t);
		if(t==5)
		    a[1]++;
		else
		    a[2]++;
	}
	if(a[2]==0){
		printf("-1");
		return 0;
	}
	int mx=0;
	for(int i=1;i<=a[1];i++){
		s=(s+5)%9;
		if(s==0)
		    mx=i;
	}
	for(int i=1;i<=mx;i++)
	    printf("5");
	if(mx==0){
		printf("0");
		return 0;
	}
	for(int i=1;i<=a[2];i++)
	    printf("0");
	return 0;
}


