#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool p[102][102];char a[102][102];
int main(){
	//freopen("P1101.in","r",stdin);
	//freopen("P1101.out","w",stdout);
    char z[10]={'y','i','z','h','o','n','g'};
    int n,js;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%s\n",a[i]);
    	memset(p[i],0,sizeof(p[i]));
    }
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		for(js=0;js<7;js++)
    			if(a[i-js][j-js]!=z[js])
    			    break;
    		if(js==7)
    		    for(int k=0;k<7;k++)
    		        p[i-k][j-k]=1;//左上 
    		for(js=0;js<7;js++)
    			if(a[i-js][j]!=z[js])
    			    break;
    		if(js==7)
    		    for(int k=0;k<7;k++)
    		        p[i-k][j]=1;//上 
    		for(js=0;js<7;js++)
    			if(a[i-js][j+js]!=z[js])
    			    break;
    		if(js==7)
    		    for(int k=0;k<7;k++)
    		        p[i-k][j+k]=1;//右上
    		for(js=0;js<7;js++)
    			if(a[i][j-js]!=z[js])
    			    break;
    		if(js==7)
    		    for(int k=0;k<7;k++)
    		        p[i][j-k]=1;//左 
    		for(js=0;js<7;js++)
    			if(a[i][j+js]!=z[js])
    			    break;
    		if(js==7)
    		    for(int k=0;k<7;k++)
    		        p[i][j+k]=1;//右 
    		for(js=0;js<7;js++)
    			if(a[i+js][j-js]!=z[js])
    			    break;
    		if(js==7)
    		    for(int k=0;k<7;k++)
    		        p[i+k][j-k]=1;//左下
    		for(js=0;js<7;js++)
    			if(a[i+js][j]!=z[js])
    			    break;
    		if(js==7)
    		    for(int k=0;k<7;k++)
    		        p[i+k][j]=1;//下 
    		for(js=0;js<7;js++)
    			if(a[i+js][j+js]!=z[js])
    			    break;
    		if(js==7)
    		    for(int k=0;k<7;k++)
    		        p[i+k][j+k]=1;//右下
    	}
    }
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(p[i][j]==1)
    		    printf("%c",a[i][j]);
    		else
    		    printf("*");
    	}
    	printf("\n");
    }
	return 0;
}


