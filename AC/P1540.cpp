#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	int m,n,w,c[105],ans=0;
	bool p[1005]={0};
	scanf("%d %d\n",&m,&n);
	for(int i=1;i<=m;i++)
	    c[i]=-1;
	for(int i=1;i<=n;i++){
	    scanf("%d",&w);
		if(p[w]==0){
			ans++;
			p[w]=1;
			p[c[1]]=0;
			for(int j=1;j<m;j++)
			    c[j]=c[j+1];
			c[m]=-2;
			for(int j=m;j>=1;j--)
			    if(c[j]>=-1){
			    	c[j+1]=w;
			    	break;
			    }
		}
	}
	printf("%d",ans);
	return 0;
}
	
