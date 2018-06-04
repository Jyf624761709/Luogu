#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	char s[25],t;
	int l,pd=1,xb=0,tx=0;
	bool p=1;
	gets(s);
	l=strlen(s);
	for(int i=0;i<l;i++){
		if(s[i]=='.'){
		    pd=2;
		    xb=i;
		}
		if(s[i]=='/'){
		    pd=3;
		    xb=i;
		}
		if(s[i]=='%')
		    pd=4;
		if(pd>1)
		    break;
	}
	if(pd==1){
        for(int i=l-1;i>=0;i--)
            if(s[i]!='0'){
            	xb=i;
            	break;
            }
		for(int i=xb;i>=0;i--)
		    printf("%c",s[i]);
	}
	if(pd==4){
		for(int i=l-2;i>=0;i--)
            if(s[i]!='0'){
            	xb=i;
            	break;
            }
		for(int i=xb;i>=0;i--)
		    printf("%c",s[i]);
		printf("%c",s[l-1]);
	}
	if(pd==2){
		for(int i=xb-1;i>=0;i--)
            if(s[i]!='0'){
            	tx=i;
            	break;
            }
		for(int i=tx;i>=0;i--)
		    printf("%c",s[i]);
		if(pd==2)
		    printf(".");
		tx=l-1;
		for(int i=xb+1;i<l;i++)
		    if(s[i]!='0'){
		    	tx=i;
		    	break;
		    }
		for(int i=l-1;i>=tx;i--)
		    printf("%c",s[i]);
	}
	if(pd==3){
		for(int i=xb-1;i>=0;i--)
            if(s[i]!='0'){
            	tx=i;
            	break;
            }
		for(int i=tx;i>=0;i--)
		    printf("%c",s[i]);
		printf("/");
		for(int i=l-1;i>xb;i--)
            if(s[i]!='0'){
            	tx=i;
            	break;
            }
		for(int i=tx;i>xb;i--)
		    printf("%c",s[i]);
	} 
	return 0;
}

