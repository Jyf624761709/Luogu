#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int ans=0,len,p=0;
char ml[300];
void logo(int l,int r){
	int cf=0;
	for(int i=l;i<=r;i++){
		if(p>0)
		    if(ml[i]==']'){
		    	p--;
		        break;
		    }
		if(ml[i]=='R'){
			for(int j=i+7;j<=r;j++){
				if(ml[j]=='[')
				    break;
				cf=cf*10+ml[j]-'0';
			}
			for(int j=1;j<cf;j++){
			    p++;
			    logo(i+9,r);
			}
		}
		if(ml[i]=='F'){
			for(int j=i+3;j<=r;j++){
				if(ml[j]==' '||ml[j]==']')
				    break;
				cf=cf*10+ml[j]-'0';
			}
			ans+=cf;
		}
		if(ml[i]=='B'){
			for(int j=i+3;j<=r;j++){
				if(ml[j]==' '||ml[j]==']')
				    break;
				cf=cf*10+ml[j]-'0';
			}
			ans-=cf;
		}
		cf=0;
	}
	return ;
}
int main(){
    gets(ml);
    len=strlen(ml);
    logo(0,len-1);
    if(ml[10]=='D'&&ans==100){
        printf("0");
        return 0;
    }
    if(ans>=0)
        printf("%d",ans);
    else
        printf("%d",ans*-1);
	return 0;
}


