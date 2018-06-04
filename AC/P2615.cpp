#include<cstdio>
#include<cstring>
int main(){
	int n,i,hf[45][45],p,wz[3][1550];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    for(int j=1;j<=n;j++)
	        hf[i][j]=0;
	hf[1][n/2+1]=1;
	wz[1][1]=1;
	wz[2][1]=n/2+1;
	p=n*n;
	for(i=2;i<=p;i++){
		if(wz[1][i-1]==1&&wz[2][i-1]<n){
			hf[n][wz[2][i-1]+1]=i;
			wz[1][i]=n;
			wz[2][i]=wz[2][i-1]+1;
		}
		if(wz[2][i-1]==n&&wz[1][i-1]>1){
			hf[wz[1][i-1]-1][1]=i;
			wz[1][i]=wz[1][i-1]-1;
			wz[2][i]=1;
		}
		if(wz[1][i-1]==1&&wz[2][i-1]==n){
			hf[2][n]=i;
			wz[1][i]=2;
			wz[2][i]=n;
		}
		if(wz[1][i-1]>1&&wz[2][i-1]<n){
		    if(hf[wz[1][i-1]-1][wz[2][i-1]+1]==0){
		        hf[wz[1][i-1]-1][wz[2][i-1]+1]=i;
		        wz[1][i]=wz[1][i-1]-1;
		        wz[2][i]=wz[2][i-1]+1;
		    }
		    else{
		        hf[wz[1][i-1]+1][wz[2][i-1]]=i;
		        wz[1][i]=wz[1][i-1]+1;
		        wz[2][i]=wz[2][i-1];
		    }
		}
	}
	for(i=1;i<=n;i++){
	    for(int j=1;j<=n;j++)
	        printf("%d ",hf[i][j]);
	    printf("\n");
	}
	return 0;
}

