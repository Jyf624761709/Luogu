#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int a[1000005];
int main(){
    int t,n;
    scanf("%d\n",&t);
    while(t--){
    	scanf("%d",&n);
    	for(int i=1;i<=n;i++)
    	    scanf("%d",&a[i]);
    	sort(a+1,a+n+1);
    	printf("%d\n",a[n/2+1]);
    }
	return 0;
}


