#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define m(a) memset(a,0,sizeof(a))
int s[5];
int t,n,a[25];
bool pd=0;
void dfs(int js,int syg){
	s[js]=0;
	for(int i=syg+1;i<=n-(4-js);i++){
		s[js]+=a[i];
		if(js<4)
		    dfs(js+1,i);
	}
    if(js==4){
    	if(s[1]==s[2]&&s[2]==s[3]&&s[3]==s[4]){
 	        pd=1;
    	}
        return ;
	}
}
int main(){
	scanf("%d",&t);
	while(t--){
		m(s);
		int as=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
		    scanf("%d",&a[i]);
		    as+=a[i];
		}
		if(as%4!=0){
			printf("no\n");
		    continue;
		}
		else
		    dfs(1,0);
		if(pd==1)
		    printf("yes\n");
		else
		    printf("no\n");
		pd=0;
	}
	return 0;
}


