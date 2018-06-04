#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    char s[100002];
	int l,i,j;
	scanf("%s",s);
	l=strlen(s);
	while(1){
		if(l%2==1){
			printf("%d",l);
	        return 0;
		}
		for(i=0,j=l-1;j>=0;i++,j--)
		    if(s[i]!=s[j])
		        break;
		if(i!=l){
			printf("%d",l);
	        return 0;
		}
		l/=2;
	} 
}


