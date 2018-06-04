#include<cstdio>
int main(){
	int a[15]={0},n,m,i,k;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		k=i;
		while(k!=0){
		    a[k%10]++;
		    k/=10;
		}
	}
	for(i=0;i<=9;i++)
	    printf("%d ",a[i]);
	return 0;
}

