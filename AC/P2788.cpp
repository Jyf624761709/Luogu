#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int main(){
    char s[60002];
    ll ans=0,js=0;
    int l,t;
    bool p=0;
    scanf("%s",s);
    l=strlen(s);
    for(int i=0;i<l;i++){
    	if(s[i]=='+'){
    		p=0;
    		t=i+1;
    	    break;
    	}
    	if(s[i]=='-'){
    		p=1;
    		t=i+1;
    	    break;
    	}
    	js=js*10+s[i]-'0';
    }
    ans=js;
    js=0;
    for(int i=t;i<l;i++){
    	if(s[i]!='+'&&s[i]!='-')
    	    js=js*10+s[i]-'0';
    	if(s[i]=='+'||s[i]=='-'||i==l-1){
    		if(p==0)
    	        ans+=js;
    	    else
    	        ans-=js;
    	    js=0;
    	}
    	if(s[i]=='+')
    	    p=0;
    	if(s[i]=='-')
    	    p=1;
    }
    printf("%lld",ans);
	return 0;
}


