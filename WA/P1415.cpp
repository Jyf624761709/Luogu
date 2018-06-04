#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	freopen("P1415.in","r",stdin);
	freopen("P1415.out","w",stdout);
	int x[105][105],m,n,ans=0;
	char s[105];
	scanf("%d%d\n",&m,&n);
	for(int i=0;i<=n+1;i++){
	    x[0][i]=1;
	    x[m+1][i]=1;
	}
	for(int i=0;i<=m+1;i++){
		x[i][0]=1;
		x[i][n+1]=1;
	}
	for(int i=1;i<=m;i++){
		scanf("%s\n",s);
		for(int j=0;j<n;j++)
		    x[i][j+1]=s[j]-'0';
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
		    if(x[i-1][j]>0&&x[i][j-1]>0&&x[i][j+1]>0&&x[i+1][j]>0&&x[i][j]>0)
		        ans++;
		    printf("%d %d %d %d\n",x[i-1][j],x[i][j-1],x[i][j+1],x[i+1][j],x[i][j]);
		}
	}
	printf("%d",ans);
	return 0;
}

