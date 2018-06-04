#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	char x[105],z[105],t;
	scanf("%d\n",&t);
	gets(x);
	scanf("\n");
	gets(z);
	t=strlen(x);
	for(int i=0;i<t;i++)
	    if(x[i]<z[i]){
	    	printf("-1");
	    	return 0;
	    }
	puts(z);
	return 0;
}

