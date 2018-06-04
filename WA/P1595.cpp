#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int main(){
	int n,a[25];
	ll ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	    a[i]=i;
	while(next_permutation(a+1,a+n+1)==true){
		bool pd=1;
		for(int i=1;i<=n;i++)
		    if(a[i]==i){
		        pd=0;
		        break;
		    }
		if(pd==1)
		    ans++;
	}
	if(n==1){
		printf("0");
		return 0;
	}
	cout<<ans+1;
	return 0;
}


