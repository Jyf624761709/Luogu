#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n,m,in[5005],y[5][5005],fsx,om,min=10000;
	scanf("%d %d\n",&n,&m);
	m=m*3/2;
	for(int i=1;i<=n;i++){
		scanf("%d %d",&y[1][i],&in[i]);
		y[2][i]=in[i];
		if(i<n)
		    scanf("\n");
	}
	sort(in+1,in+n+1,cmp);
	fsx=in[m];
	for(int i=1;i<=n;i++)
	    if(in[i]<fsx){
	    	om=i-1;
	        break;
	    }
    printf("%d %d\n",fsx,om);	    
	for(int i=1;i<=om;i++){
		for(int j=n;j>=1;j--)
		    if(y[2][j]==in[i]&&y[1][j]<min)
		    	min=y[1][j];
		for(int j=n;j>=1;j--)
		    if(min==y[1][j]){
		        printf("%d %d\n",min,in[i]);
		        y[2][j]=0;
		    }
		min=10000;
	}
	return 0;
}
