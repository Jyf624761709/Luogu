#include<cstdio>
int main(){
	double k,s=0,n=1;
	scanf("%lf",&k);
	while(1){
	    s+=(1.0/n);
	    if(s>k){
	        printf("%.0lf",n);
			return 0;
	    }
	    n++;
	}
}
