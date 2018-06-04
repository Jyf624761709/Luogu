#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	bool p[105]={0};
	int i=0,m,n,k,s,ans=0;
	scanf("%d %d",&n,&m);
	if(n==0)
	    return 0;
	printf("%d ",m);
	s=m+1;
	p[m]=1;
	while(1){
		for(int j=s;;j=j%n+1){
			if(p[j]==0)
			    i++;
			if(i==m){
			    printf("%d ",j);
			    ans++;
			    p[j]=1;
			    s=j%n+1;
				break;
			}
		}
		if(ans==n)
		    return 0;
		i=0;
	}
}

