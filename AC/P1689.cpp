#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	char fc[205];
	int ans=0,l,h=0,xb,ans2=0,wz=1;
	bool p=0;
	gets(fc);
	l=strlen(fc);
	for(int i=0;i<l;i++){
		if(fc[i]>='0'&&fc[i]<='9'){
		    ans=ans*10+fc[i]-'0';
		    p=1;
		}
		if(p==1&&(fc[i]<'0'||fc[i]>'9')&&fc[i]!=' '){
			xb=i;
		    break;
		}
	}
	for(int i=0;i<l;i++)
	    if(fc[i]=='-'){
	        h=1;
	        break;
	    }
	p=0;
	for(int i=xb;i<l;i++){
		if(fc[i]>='0'&&fc[i]<='9'){
		    ans2=ans2*10+fc[i]-'0';
		    p=1;
		}
		if(p==1&&(fc[i]<'0'||fc[i]>'9')&&fc[i]!=' ')
		    break;
	}
	for(int i=0;i<l;i++){
		if(fc[i]=='?')
		    break;
		if(fc[i]=='+'||fc[i]=='-'||fc[i]=='=')
		    wz++;
	}
	if(wz==1){
		if(h==0)
		    printf("%d",ans2-ans);
		else
		    printf("%d",ans+ans2);
	}
	if(wz==2){
		if(h==0)
		    printf("%d",ans2-ans);
		else
		    printf("%d",ans-ans2);
	}
	if(wz==3){
		if(h==0)
		    printf("%d",ans+ans2);
		else
		    printf("%d",ans-ans2);
	}
	return 0;
}

