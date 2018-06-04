#include<cstdio>
#include<cstring>
int main(){
	int k,i,a,b,c,s=0;
	scanf("%d",&k);
	for(i=10000;i<=30000;i++){
		a=i/100;
		b=i/10%1000;
		c=i%1000;
		if(a%k==0&&b%k==0&&c%k==0){
		    s++;
		    printf("%d\n",i);
		}
	}
	if(s==0)
	    printf("No");
	return 0;
}
