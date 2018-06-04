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
ll n,fd[100005];
inline ll re(ll a){
	ll an[1005],aa=0,ab=0;
	int l=0;
	while(a>0){
		an[++l]=a%10;
		a/=10;
	}
	sort(an+1,an+1+l);
	for(int i=1;i<=l;i++)
	    aa=aa*10+an[i];
	for(int i=l;i>0;i--)
	    ab=ab*10+an[i];
	return ab-aa;
}
inline void work(){
	while((scanf("%lld",&n))!=EOF){
		int l=1;
		fd[l]=n;
		while(1){
			bool p=0;
			fd[++l]=re(fd[l-1]);
			for(int i=1;i<l;i++)
			    if(fd[i]==fd[l]){
			    	for(int j=i;j<l;j++)
			    	    printf("%lld ",fd[j]);
			    	printf("\n");
			    	p=1;
			    	break;
			    }
			if(p)
			    break;
		}
	}
}
int main(){
    work();
	return 0;
}


