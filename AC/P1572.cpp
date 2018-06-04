#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int gcd(int c,int d){
    if(c%d==0)
	    return d;
	gcd(d,c%d); 
}
int main(){
    char s[1005];
    int fs[1000][5],ans=0,l,t,js=2,t1,lcm,tt;
    gets(s);
    l=strlen(s);
    if(s[0]=='-'){
    	fs[1][1]=0;
    	fs[1][2]=0;
    	fs[1][3]=-1;
    	for(int i=1;i<l;i++){
    	    if(s[i]=='/'){
    	    	t=i+1;
    	        break;
    	    }
    	    fs[1][1]=fs[1][1]*10+s[i]-'0';
    	}
    	for(int i=t;i<l;i++){
    	    if(s[i]=='+'||s[i]=='-'){
    	    	t=i;
    	        break;
    	    }
    	    fs[1][2]=fs[1][2]*10+s[i]-'0';
    	}
    }
    if(s[0]!='-'){
    	fs[1][1]=0;
    	fs[1][2]=0;
    	fs[1][3]=1;
    	for(int i=0;i<l;i++){
    	    if(s[i]=='/'){
    	    	t=i+1;
    	        break;
    	    }
    	    fs[1][1]=fs[1][1]*10+s[i]-'0';
    	}
    	for(int i=t;i<l;i++){
    	    if(s[i]=='+'||s[i]=='-'){
    	    	t=i;
    	        break;
    	    }
    	    fs[1][2]=fs[1][2]*10+s[i]-'0';
    	}
    }
	lcm=fs[1][2];
    for(int i=t;i<l;i++){
        fs[js][1]=0;
    	fs[js][2]=0;
    	if(s[i]=='+')
    	    fs[js][3]=1;
    	if(s[i]=='-')
    	    fs[js][3]=-1;
    	for(int j=i+1;j<l;j++){
    	    if(s[j]=='/'){
    	        t1=j+1;
    	        break;
    	    }
    	    fs[js][1]=fs[js][1]*10+s[j]-'0';
    	}
        for(int j=t1;j<l;j++){
    	    if(s[j]=='+'||s[j]=='-'){
    	        i=j-1;
    	        break;
    	    }
    	    if(j==l-1)
    	        i=l-1;
    	    fs[js][2]=fs[js][2]*10+s[j]-'0';
    	}
		lcm=gcd(fs[js][2],lcm)*(fs[js][2]/gcd(fs[js][2],lcm))*(lcm/gcd(fs[js][2],lcm));
		js++;
    }
    for(int i=1;i<js;i++){
    	fs[i][1]*=lcm/fs[i][2];
        ans+=fs[i][1]*fs[i][3];
    }
    if(ans<0){
    	ans*=-1;
    	tt=ans;
        ans/=gcd(ans,lcm);
        lcm/=gcd(tt,lcm);
        if(lcm==1)
            printf("-%d",ans);
        else
            printf("-%d/%d",ans,lcm);
        ans*=-1;
    }
    if(ans==0)
    	printf("0");
    if(ans>0){
    	tt=ans;
	    ans/=gcd(ans,lcm);
        lcm/=gcd(tt,lcm);
        if(lcm==1)
            printf("%d",ans);
        else
            printf("%d/%d",ans,lcm);
    }
	return 0;
}


