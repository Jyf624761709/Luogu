#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	//freopen("奖学金.in","r",stdin);
	//freopen("奖学金.out","w",stdout);
	int a,b,c,sc[305],to[305],n,d,d1,t;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
	    scanf("%d %d %d",&a,&b,&c);
	    if(i<n)
	        scanf("\n");
	    sc[i]=a;
	    to[i]=a+b+c;
	}
	if(n<5)
	    t=n;
	if(n>=5)
	    t=5;
	for(int i=1;i<=t;i++){
	    d=to[1];
		for(int j=2;j<=n;j++){
			if(to[j]>d)
			    d=to[j];
		}
		for(int j=1;j<=n;j++)
			if(to[j]==d){
				d1=sc[j];
				break;
			}
		for(int j=2;j<=n;j++)
		    if(to[j]==d)
		        if(sc[j]>d1)
		            d1=sc[j];
		for(int j=1;j<=n;j++)
		    if(to[j]==d)
		        if(sc[j]==d1){
		            printf("%d %d\n",j,to[j]);
		            to[j]=-1;
		            sc[j]=-1;
		            break;
		        }
	}
	return 0;
}
