#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n,q,qj[50005],b,t;
int ef(int l,int r,int a){
	if(l+1==r)
		return l;
	if(a>=qj[(l+r)/2])
		return ef((l+r)/2,r,a);
	else
		return ef(l,(l+r)/2,a);
}
int main(){
	scanf("%d%d\n",&n,&q);
	qj[1]=0;
	for(int i=2;i<=n+1;i++){
		scanf("%d",&b);
		qj[i]=qj[i-1]+b;
	}
	for(int i=1;i<=q;i++){
		scanf("%d",&t);
		printf("%d\n",ef(1,n+1,t));
	}
	return 0;
}

	

