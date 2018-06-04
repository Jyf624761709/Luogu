#include<cstdio>
int main(){
	int d[10005][6],i,n,x,y,a,b,ans=0;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	    scanf("%d %d %d %d\n",&d[i][1],&d[i][2],&d[i][3],&d[i][4]);
	scanf("%d %d",&x,&y);
	for(i=1;i<=n;i++){
		a=d[i][1]+d[i][3];
		b=d[i][2]+d[i][4];
		if(d[i][1]<=x&&x<=a&&d[i][2]<=y&&y<=b)
		   ans=i;
	}
	if(ans!=0)
	    printf("%d",ans);
	else
	    printf("-1");
	return 0;
}

