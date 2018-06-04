#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
const int N=1000005;
int main(){
    char s[N];
    ll ans=0,cf=1,jf=0;
    int l;
    scanf("%s",s);
    l=strlen(s);
    for(int i=0;i<l;i++){
    	for(int j=i;j<l;j++){
    		if(s[j]=='+'){
    			cf=(cf*(jf%10000))%10000;
    			i=j;
    			jf=0;
    		    break;
    		}
    		if(s[j]!='*')
    		    jf=jf*10+s[j]-'0';
    		else{
    		    cf=(cf*(jf%10000))%10000;
    		    jf=0;
    		}
		    if(j==l-1){
		    	cf=(cf*(jf%10000))%10000;
    			i=j;
    			jf=0;
    		    break;
		    }
    	}
    	ans=(ans+cf)%10000;
    	cf=1;
    }
    printf("%d",ans);
	return 0;
}


