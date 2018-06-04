#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int a[100005],l;
void ja(int p){
	int jw=0,t;
	if(p==1){
	    for(int i=l;i>=1;i--){
		    t=a[i];
	        a[i]=(a[i]+a[i]+jw)%10;
	        jw=(t+t+jw)/10;
    	}
	    if(jw>0){
	        l++;
	        for(int i=l;i>=2;i--)
	            a[i]=a[i-1];
	        a[1]=1;
	    }    
	}
	else{
		int b[100005];
		memset(b,0,sizeof(b));
		b[l]=2;
		for(int i=l;i>=1;i--){
		    t=a[i];
	        a[i]=(a[i]+b[i]+jw)%10;
	        jw=(t+b[i]+jw)/10;
    	}
	    if(jw>0){
	        l++;
	        for(int i=l;i>=2;i--)
	            a[i]=a[i-1];
	        a[1]=1;
	    }  
	}
}
int main(){
    int n;
    scanf("%d",&n);
    l=1;
    a[1]=2;
    for(int i=2;i<=n;i++){
    	ja(1);
    	ja(2);
    }
    for(int i=1;i<=l;i++)
        printf("%d",a[i]);
	return 0;
}


