#include<cstdio>
int gcd(int e,int f){
	if(e%f==0)
		return f;
	return gcd(f,e%f);
}
int main(){
	int a,b,c,d,sa,xa,g;
	scanf("%d/%d\n%d/%d",&a,&b,&c,&d);
	sa=a*c;
	xa=b*d;
	g=gcd(sa,xa);
	sa/=g;
	xa/=g;
	printf("%d %d",xa,sa);
	return 0;
}

