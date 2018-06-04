#include<cstdio>
int main(){
	int n,a,len=0,j;
	bool m[1005]={0};
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		scanf("%d",&a);
		m[a]=1;
	}
	for(j=1;j<=1000;j++)
		if(m[j]!=0)
			len++;
	printf("%d\n",len);
	for(j=1;j<=1000;j++)
		if(m[j]!=0)
			printf("%d ",j);
	return 0;
}
