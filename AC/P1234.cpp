#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char a[1002][1002];
int main(){
    char z[10]={'h','e','h','e'};
    int n,js,m,ans=0;
    scanf("%d%d\n",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%s\n",a[i]);
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		for(js=0;js<4;js++)
    			if(a[i-js][j]!=z[js])
    			    break;
    		if(js==4)
			    ans++;//ио 
    		for(js=0;js<4;js++)
    			if(a[i][j-js]!=z[js])
    			    break;
    		if(js==4)
			    ans++;//вС 
    		for(js=0;js<4;js++)
    			if(a[i][j+js]!=z[js])
    			    break;
    		if(js==4)
			    ans++;//ср 
    		for(js=0;js<4;js++)
    			if(a[i+js][j]!=z[js])
    			    break;
    		if(js==4)
			    ans++;//об 
    	}
    }
    printf("%d\n",ans);
	return 0;
}


