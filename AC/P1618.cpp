#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	bool p[11]={0},pd=1,d=0;
	double j,k;
    int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	for(double i=111;i<=333;i++){
		j=i/a*b;
		k=i/a*c;
		p[(int)(j)/100]=1;
		p[(int)(j)/10%10]=1;
		p[(int)(j)%10]=1;
		p[(int)(i)/100]=1;
		p[(int)(i)/10%10]=1;
		p[(int)(i)%10]=1;
		p[(int)(k)/100]=1;
		p[(int)(k)/10%10]=1;
		p[(int)(k)%10]=1;
		for(int l=1;l<=9;l++)
		    if(p[l]==0){
		    	pd=0;
		    	break;
		    }
		if((int)(j)==j&&(int)(k)==k&&pd==1&&j<1000&&k<1000){
		    printf("%.0lf %.0lf %.0lf\n",i,j,k);
		    d++;
		}
		pd=1;
		memset(p,0,sizeof(p));
	}
	if(!d)
	    printf("No!!!");
	return 0;
}

