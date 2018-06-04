#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std; 
int main(){
	int s,m,t,i;
	char n[1005];
	scanf("%d ",&m);
	gets(n);
	s=strlen(n)-1;
	for(i=s;i>=0;i--)
	    if(n[i]!='0'){
	        t=i-1;
	        break;
	    }
	for(i=0;i<=t;i++){
	    if(n[i]!='0'){
	        printf("%c*%d^%d+",n[i],m,s);
	    }
	    s--;
	}
	printf("%c*%d^%d",n[i],m,s);
	return 0;
}
