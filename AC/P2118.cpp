#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int gcd(int a,int b){
	if(a%b==0)
	    return b;
	gcd(b,a%b);
}
int main(){
    int a,b,l,ansb=1,ansa=1<<30;
	scanf("%d%d%d",&a,&b,&l);
	for(int i=1;i<=l;i++){
		for(int j=1;j<=l;j++){
			if(gcd(i,j)==1)
				if(i*b>=j*a)
				   if(i*ansb<j*ansa){
				       ansa=i;
				       ansb=j;
				   }
		}
    }
    printf("%d %d",ansa,ansb);
	return 0;
}


