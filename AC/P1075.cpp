#include<cstdio>
int main(){
	int n,p,i;
	scanf("%d",&n);
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			p=n/i;
			if(i>p){
				p=i;
			}
			printf("%d",p);
	        return 0;
		}
	}
}
