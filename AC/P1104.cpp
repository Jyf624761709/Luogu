#include<cstdio>
int main(){
	int n,ans[5][105],a,b,c,m,dz,j,y,d; 
	char na[105][25];
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
	    scanf("%s%d%d%d",na[i],&a,&b,&c);
	    if(i<n)
	        scanf("\n");
	    ans[1][i]=a;
		ans[2][i]=b;
		ans[3][i]=c;
	}
	y=ans[1][1];
	m=ans[2][1];
	d=ans[3][1];
	for(int i=1;i<=n;i++){
		for(j=1;j<=n;j++){
		    if(ans[1][j]<y){
			    y=ans[1][j];
				m=ans[2][j];
				d=ans[3][j];
		    	dz=j;
		    }
		    if(ans[1][j]==y)
		    	if(ans[2][j]<m){
		    	    y=ans[1][j];
				    m=ans[2][j];
				    d=ans[3][j];
		    	    dz=j;
		    	}
		    if(ans[1][j]==y&&ans[2][j]==m&&ans[3][j]<=d){
		        y=ans[1][j];
				m=ans[2][j];
				d=ans[3][j];
		    	dz=j;
		    }
		}
		printf("%s\n",na[dz]);
		ans[1][dz]=10000000;
		ans[2][dz]=13;
		ans[3][dz]=32;
		for(j=1;j<=n;j++)
		    if(ans[1][j]>0){
		    	y=ans[1][j];
				m=ans[2][j];
				d=ans[3][j];
				break;
		    }
	}
	return 0;
}

