#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n,a[105],ans=0,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	scanf("%d",&a[i]);
    	s+=a[i];
    }
    s/=n;
	for(int i=1;i<=n;i++){
		if(a[i]<s){
			a[i+1]-=s-a[i];
			ans++;
		}
		if(a[i]>s){
		    a[i+1]+=a[i]-s;
			ans++;
		}
    }
    printf("%d",ans);
	return 0;
}


