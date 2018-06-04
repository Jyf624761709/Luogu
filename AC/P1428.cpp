#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	int n,a[105],s=0,i;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
    	scanf("%d",&a[i]);
    	for(int j=1;j<i;j++)
    	    if(a[j]<a[i])
    	        s++;
    	printf("%d ",s);
    	s=0;
    }
	return 0;
}
