#include<cstdio>
const int N=10000005;
int main(){
	bool p[N];
	int m,n,a,i;
	scanf("%d %d\n",&n,&m);
	for(i=2;i<=n;i++)
	   p[i]=1;
	for(i=2;i<=n;i++)
	    if(p[i]==1)
	        for(int j=2*i;j<=n;j+=i)
	            p[j]=0;
	for(i=1;i<=m;i++){
		scanf("%d",&a);
		if(i<m)
		    scanf("\n");
		if(p[a]==1)
		    printf("Yes\n");
		if(p[a]==0)
		    printf("No\n");
	}
	return 0;
}

