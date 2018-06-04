#include<cstdio>
int main(){
	int a,b,c,d,e;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	a=a*60+b;
	b=c*60+d;
	c=b-a;
	printf("%d %d",c/60,c%60);
	return 0;
}
