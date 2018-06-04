#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n,a[10000005],js=0;
int main(){
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++){
    	js++;
    	if(a[i]!=a[i+1]){
    		if(js&1==1){
    			printf("%d",a[i]);
    			return 0;
    		}
    		js=0;
    	}
    }
	return 0;
}


