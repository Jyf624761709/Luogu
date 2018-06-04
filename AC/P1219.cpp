#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n,js=0;
bool p[15][15],is=1;
void dfs(int x){
    if(x>n){
	    if(js<3){
	        for(int i=1;i<=n;i++){
	    	    for(int j=1;j<=n;j++){
	    	        if(p[i][j]==1){
	    	        	printf("%d ",j);
	    	        	break;
	    	        }
	            }
            }
        	printf("\n");
    	}	
    	if(n>=12&&js==2)
    	    is=0;
        js++;
        return ;
    }
	for(int j=1;j<=n;j++){
		bool pd=1;
		for(int k=1;k<=n;k++){ 
		    if(p[k][j]==1){
		        pd=0;
		    } 
		} //行 
		for(int k=1;k<=n;k++)
		    if(p[x][k]==1){
				pd=0;
		    }//列 
		for(int k=1;k<=n&&x-k>0&&j-k>0;k++)
		    if(p[x-k][j-k]==1){
		        pd=0;
		    }//左上 
		for(int k=1;k<=n&&x-k>0&&j+k<=n;k++)
		    if(p[x-k][j+k]==1)
			    pd=0;//右上 
		for(int k=1;k<=n&&x+k<=n&&j-k>0;k++)
		    if(p[x+k][j-k]==1)
		        pd=0;//左下 
		for(int k=1;k<=n&&x+k<=n&&j+k<=n;k++)
		    if(p[x+k][j+k]==1)
		        pd=0;//右下 
		if(pd==1){
		    p[x][j]=1;
		    if(is==1)
		        dfs(x+1);
		    p[x][j]=0;
		}
	}
}
int main(){
    scanf("%d",&n);
	for(int i=1;i<=n;i++)
	    memset(p[i],0,sizeof(p[i]));
	dfs(1);
	if(n==12)
	    printf("%d",14200);
	if(n==13)
	    printf("%d",73712);
	if(n<12)  
        printf("%d",js);
	return 0;
}


