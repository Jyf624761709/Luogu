#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	freopen("P2670.in","r",stdin);
	freopen("P2670.out","w",stdout);
    int m,n,js[102][102];
	char le[102][102]; 
	scanf("%d%d\n",&m,&n);
	for(int i=0;i<m;i++){
	    for(int j=0;j<n;j++)
	        scanf("%c",&le[i][j]);
	    scanf("\n");
	}
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++){
	    	js[i][j]=0;
	    	if(le[i][j]=='?'){
	    	    if(le[i-1][j-1]=='*')
	    	        js[i][j]++;
	    	    if(le[i-1][j]=='*')
	                js[i][j]++;
	    	    if(le[i-1][j+1]=='*')
	    	        js[i][j]++;
	    	    if(le[i][j-1]=='*')
	    	        js[i][j]++;
	    	    if(le[i][j+1]=='*')
	    	        js[i][j]++;
	    	    if(le[i+1][j-1]=='*')
	    	        js[i][j]++;
	    	    if(le[i+1][j]=='*')
	    	        js[i][j]++;
	    	    if(le[i+1][j+1]=='*')
	    	        js[i][j]++;
	    	}
	    	if(le[i][j]=='*')
	    	    js[i][j]=-1;
	    }
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(js[i][j]>-1)
	            printf("%d",js[i][j]);
	        else
	            printf("*");
		}
		printf("\n");
	}
	return 0;
}


