#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXN=2147483647;
const int MINN=-2147483647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int n,m,ch[5005],mx=MINN;
inline int ma(int a,int b){
	return a>b?a:b;
}
inline void input(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
	   scanf("%d",&ch[i]);
	   mx=ma(ch[i],mx);
	}
}
inline bool fd(int f){
	int ans=0;
	for(int i=1;i<=n;i++)
	    ans+=ch[i]/f;
	return ans>=m ? true : false;
}
int main(){
	input();
	int mid,l=1,r=mx;
	while(1){
		if(l+1==r){
			printf("%d",l);
			return 0;
		}
		mid=(l+r)/2;
		if(fd(mid)==true)
		    l=mid;
		else
		    r=mid;
	}
	return 0;
}


