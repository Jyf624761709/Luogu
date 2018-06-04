#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	int n,m,x[10005];
	scanf("%d%d\n",&n,&m);
	for(int i=1;i<=n;i++)
	    scanf("%d",&x[i]);
	for(int i=1;i<=m;i++)
	    next_permutation(x+1,x+n+1);
	for(int i=1;i<n;i++)
	    printf("%d ",x[i]);
	printf("%d",x[n]);
	return 0;
}

