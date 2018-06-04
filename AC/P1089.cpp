#include<cstdio> 
int main(){
	int q,s=0,m=0,i=1,j;
	for(i=1;i<=12;i++){
	    scanf("%d",&q);
	    if(s+300<q){
	        printf("-%d",i);
	        return 0;
	    }
		m+=(s+300-q)/100*100;
		s=(s+300-q)%100;
	} 
	j=s+m*6/5;
	printf("%d",j);
	return 0;
}
