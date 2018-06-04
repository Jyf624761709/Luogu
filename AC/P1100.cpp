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
const ll N=((ll) 1)<<((ll) 16);
int main(){
	ll t;
	scanf("%lld",&t);
	printf("%lld",t%N*N+t/N); 
	return 0;
}


