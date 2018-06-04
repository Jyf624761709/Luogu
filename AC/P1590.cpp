#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
bool p(int r){
	while(r>0){
		if(r%10==7)
			return 0;
		r/=10;
	}
	return 1;
}
int main(){
	int n,i,t,ans;
	scanf("%d\n",&t);
	while(t--){
		scanf("%d\n",&n);
		ans=n;
		for(i=1;i<=n;i++)
			if(p(i)==0)
				ans--;
	    printf("%d\n",ans);
	}
	return 0;
}

