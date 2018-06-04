#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char s[1000005];
string z;
int js;
void dfs(int l,int r){
	bool pd=1;
	for(int i=l;i<=r;i++){
	    if(s[i]!='0'){
	    	pd=0;
	    	break;
	    }
	}
	if(pd==1){
		z+='A';
	    return ;
	}
	bool pb=1;
	for(int i=l;i<=r;i++){
	    if(s[i]!='1'){
	    	pb=0;
	    	break;
	    }
	}
	if(pb==1){
		z+='B';
	    return ;
	}
	if(pd==0&&pb==0){
		z+='C';
		return dfs(l,(r+1)/2-1);
		return dfs((r+1)/2,r);
	}
	return ;
}
int main(){
    int l; 
    scanf("%s",s);
    l=strlen(s);
    dfs(0,l-1);
    cout<<z;
	return 0;
}


