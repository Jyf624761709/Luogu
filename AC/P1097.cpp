#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n,a[200005],js=0;
    scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	    scanf("%d",&a[i]);
	sort(a,a+n);
	for(int i=0;i<n;i++){
		js++;
		if(a[i]!=a[i+1]){
			printf("%d %d\n",a[i],js);
			js=0;
		}
	}
	return 0;
}


