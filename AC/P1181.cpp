#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int ans=0,s=0,n,m,a;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
    	scanf("%d",&a);
    	if(s+a>m){
    	    ans++;
    	    s=0;
    	}
    	s+=a;
    }
    printf("%d",ans+1);
	return 0;
}


