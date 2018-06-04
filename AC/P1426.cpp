#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	double s,x,sd=7,ans=0;
	scanf("%lf %lf",&s,&x);
	if(ans>=s-x&&ans<=s+x){
    	if(7>s+x)
    	    printf("n");
    	else
    		printf("y");
    	return 0;
    }
    while(1){
    	ans+=sd;
    	sd*=0.98;
    	if(ans>=s-x&&ans<=s+x){
    		if(ans+sd>s+x)
    		    printf("n");
    		else
    		    printf("y");
    		return 0;
    	}
	}
}

