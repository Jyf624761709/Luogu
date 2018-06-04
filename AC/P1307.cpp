#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    char a[20];
    int p=0,l,xb=0;
    gets(a);
    if(a[0]=='-'){
        p=1;
        xb=1;
    }
    l=strlen(a)-1;
    if(p==0){
        for(int i=l;i>=0;i--)
            if(a[i]>'0'){
                xb=i;
                break;
            }
        for(int i=xb;i>=0;i--)
            printf("%c",a[i]);
    }
    else{
    	for(int i=l;i>0;i--)
            if(a[i]>'0'){
                xb=i;
                break;
            }
        printf("-");
        for(int i=xb;i>0;i--)
            printf("%c",a[i]);
    }
	return 0;
}


