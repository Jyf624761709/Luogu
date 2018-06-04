#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int aa[100005],bb[100005],n,k,a,b,c,i;
int main(){
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
		aa[i]=i;
	while(k--){
		scanf("%d%d%d",&a,&b,&c);
		for(i=a;i<=b;i++)
			bb[i-a]=aa[i];
		for(i=b+1;i<=n;i++)
			aa[i-(b-a+1)]=aa[i];
		for(i=n-(b-a+1);i>=c+1;i--)
			aa[i+(b-a+1)]=aa[i];
		for(i=c+1;i<=c+(b-a+1);i++)
			aa[i]=bb[i-(c+1)];
		}
		for(i=1;i<=10;i++)
			printf("%d\n",aa[i]);
	return 0;
}

