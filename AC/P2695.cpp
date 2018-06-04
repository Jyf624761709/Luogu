#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
using namespace std;
typedef long long ll;
int main(){
	int n,m;
    ll he[20005],mo[20005];
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%lld",&he[i]);
	for(int i=1;i<=m;i++)
		scanf("%lld",&mo[i]);
	sort(he+1,he+1+n);
	sort(mo+1,mo+1+m);
	int js=1;
	ll ans=0;
    for(int i=1;i<=n;i++){
		int id=-1;
		for(int j=js;j<=m;j++)
			if(mo[j]>=he[i]){
				id=j;
				js=id+1;
				break;
			}
		if(id==-1){
			printf("you died!");
			return 0;
		}
		ans+=mo[id];
	}
	printf("%lld",ans);
	return 0;
}

