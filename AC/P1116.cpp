#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std; 
int main(){
	int n,a[10005],b[10005],t,i,ans=0;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
	   scanf("%d",&a[i]);
	   b[i]=a[i];
	}
	sort(b+1,b+n+1);
	while(1){
		for(i=2;i<=n;i++)
		    if(a[i]<a[i-1]){
		    	t=a[i-1];
		    	a[i-1]=a[i];
		    	a[i]=t;
		    	ans++;
		    }
		for(i=1;i<=n;i++)
		    if(a[i]!=b[i])
		        break;
		if(i==n+1){
			printf("%d",ans);
			return 0;
		}
  	}
  	return 0;
}
