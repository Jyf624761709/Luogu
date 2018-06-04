#include<cstdio>
int main(){
	int n,a[20005],y=1,max=0;
	scanf("%d %d",&n,&a[1]);
	for(int i=2;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]==a[i-1]+1)
		    y++;
		else
		    y=1;    
		if(y>max)
		    max=y;
	}
	printf("%d",max);
	return 0;
}
