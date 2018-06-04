#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define I inline
#define R register
const int inf=2147483647;
const int ine=-2147483647;
using namespace std;
typedef long long ll;
int n,a[105],ans=0;
bool t[10005];
I void work(){
	for(R int i=1;i<n;++i)
	    for(R int j=i+1;j<=n;++j)
			if(a[i]+a[j]<=10000)
				t[a[i]+a[j]]=1;
	for(R int i=1;i<=n;++i)
		if(t[a[i]]) ++ans;
}			
int main(){
	scanf("%d",&n);
	for(R int i=1;i<=n;++i)
		scanf("%d",&a[i]);
	work();
	printf("%d",ans);
	return 0;
}

