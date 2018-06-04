#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int w,n,a[30002],ans=0;
    scanf("%d%d",&w,&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int i=1;
    int j=n;
    sort(a+1,a+n+1);
    while(i<=j){
    	ans++;
    	if(a[i]+a[j]<=w){
    		i++;
    		j--;
    	}
    	else
    	    j--;
    }
    printf("%d",ans);
	return 0;
}


