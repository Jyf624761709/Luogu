#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		int t=i,js=i;
		while(js++){
			t+=js;
			if(n==t){
				printf("%d %d\n",i,js);
				break;
			}
			if(t>n)
			    break;
		}
	}
	return 0;
}


