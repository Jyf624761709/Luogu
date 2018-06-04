#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int da[10],l,t,d1=0,d2=0,md[15]={0,31,28,31,30,31,30,31,31,30,31,30,31},n,y,r,t1,t2,ans=0,a1,a2;
char daa[20],daa1[10];
bool p(){
	for(int i=1,j=8;i<j;i++,j--)
	    if(da[i]!=da[j])
	        return 0;
	return 1;
}
int main(){
	gets(daa);
	for(int i=0;i<=7;i++){
	    d1*=10;
	    d1+=daa[i]-'0';
	}
	l=strlen(daa);
	if(l==8)
 	    scanf("\n%d",&d2);
	else
	    for(int i=8;i<=15;i++){
	        d2*=10;
	        d2+=daa[i]-'0';
	    }
	for(n=d1/10000;n<=d2/10000;n++){
		if(n==d1/10000)
		    t1=d1%10000/100;
		else
		    t1=1;
		if(n==d2/10000)
		    a1=d2%10000/100;
		else
		    a1=12;
		for(y=t1;y<=a1;y++){
			a2=md[y];
			if(y==2){
				if(n%4==0&&n%100!=0)
				    a2=29;
			    if(n%400==0)
			        a2=29;
			}
			if(n*100+y==d1/100)
			    t2=d1%100;
			else
			    t2=1;
			if(n*100+y==d2/100)
			    a2=d2%1000;
			for(int r=t2;r<=a2;r++){
				da[1]=n/1000;
				da[2]=n%1000/100;
				da[3]=n%100/10;
				da[4]=n%10;
				da[5]=y/10;
				da[6]=y%10;
				da[7]=r/10;
				da[8]=r%10;
				if(p()==1)
				    ans++;
			}
		}
	}
	printf("%d",ans);
	return 0;
}

