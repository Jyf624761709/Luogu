#include<cstdio>
int main(){
	int n,s=0,i,a,b;
	scanf("%d",&n);
	if(n==1){
	     printf("1/1");
	     return 0;
	}
	for(i=1;;i++){
		s+=i;
		if(s>=n){
			s-=i;
			s=n-s;
		    break;
		}
	}
	i--;
	if(i%2==0){
	    b=s;
	    a=i+2-b;
	}
	else{
	    a=s;
		b=i+2-a;
	}
	printf("%d/%d",a,b);
	return 0;
}

