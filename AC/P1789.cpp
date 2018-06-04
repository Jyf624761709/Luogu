#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m,k,x[105],y[105],o[105],p[105],ans=0;
	bool z[105][105];
	scanf("%d %d %d\n",&n,&m,&k);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		    z[i][j]=0;
	}
	for(int i=1;i<=m;i++){
		if(i<m)
	        scanf("%d %d\n",&x[i],&y[i]);
	    if(i==m&&k<1)
	        scanf("%d %d",&x[i],&y[i]);
	    if(i==m&&k>0)
	        scanf("%d %d\n",&x[i],&y[i]);
	}
	for(int i=1;i<=k;i++){
		if(i<k)
	        scanf("%d %d\n",&o[i],&p[i]);
	    else
	        scanf("%d %d",&o[i],&p[i]);
	}
	for(int i=1;i<=m;i++){
		for(int j=x[i]-1;j<=x[i]+1;j++)
		    for(int l=y[i]-1;l<=y[i]+1;l++)
		        z[j][l]=1;
		z[x[i]-2][y[i]]=1;
		z[x[i]][y[i]-2]=1;
		z[x[i]+2][y[i]]=1;
		z[x[i]][y[i]+2]=1;
	}
	for(int i=1;i<=k;i++){
		for(int j=o[i]-2;j<=o[i]+2;j++)
		    for(int l=p[i]-2;l<=p[i]+2;l++)
		        z[j][l]=1;
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		    if(z[i][j]==0)
		        ans++;
    printf("%d",ans);
    return 0;
}

