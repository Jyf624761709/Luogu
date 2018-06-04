#include<cstdio>
int main(){
	int a[12],b,ans=0;
	for(int i=1;i<=10;i++){
		scanf("%d ",&a[i]);
	}
	scanf("%d",&b);
	for(int j=1;j<=10;j++){
		if(a[j]<=b+30)
		    ans++;
	}
	printf("%d",ans);
	return 0;
} 

