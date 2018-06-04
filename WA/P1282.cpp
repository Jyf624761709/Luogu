#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
typedef long long ll;
int sj=2147483647,sk=2147483647;
int n,p[3][30];
void dfs(int i,int j,int k){
	if((abs)(j)>sj)
		return;
	if((abs)(j)==sj&&k>sk)
	    return;
	if(i>n){
		if((abs)(j)<sj){
			sj=(abs)(j);
			sk=k;
		}
		if((abs)(j)==sj&&k<sk)
			sk=k;
		return;
	}
	dfs(i+1,j+p[1][i]-p[2][i],k);
	dfs(i+1,j+p[2][i]-p[1][i],k+1);
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d%d",&p[1][i],&p[2][i]);
	dfs(1,0,0);
	printf("%d\n",sk);
	return 0;
}

