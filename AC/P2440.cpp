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
int l=1,r=MINN,n,k,w[100005];
inline int mx(int a,int b){
	return a>b?a:b;
}
inline bool fd(int f){
    int ans=0;
    for(int i=1;i<=n;i++)
    	ans+=w[i]/f;
    return ans>=k;
}
int main(){
	ll s=0;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&w[i]);
		r=mx(r,w[i]);
		s+=1ll*w[i];
	}
	if(k>s){
		printf("0");
		return 0;
	}
	if(k==s){
		printf("1");
		return 0;
	}
	int mid;
	while(1){
		if(l+1==r)
		    break;
		mid=(l+r)>>1;
		if(fd(mid)==true)
		    l=mid;
		else
		    r=mid;
	}
	if(fd(r)==true)
	    printf("%d",r);
	else
	    printf("%d",l);
	return 0;
}


