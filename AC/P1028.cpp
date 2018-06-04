#include<cstdio> 
int s=1;
int dg(int n){
	int i;
	if(n<=1)
	    return 0;
	s+=n/2;
	for(i=1;i<=n/2;i++)
	    dg(i);
}
int main(){
	int a;
	scanf("%d",&a);
	dg(a);
    printf("%d",s);
	return 0;
}

