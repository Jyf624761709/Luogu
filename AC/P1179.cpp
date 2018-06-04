#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int c(int z){
	int ans=0;
	while(z>0){
	    if(z%10==2)
	        ans++;
	    z/=10;
	}
	return ans;
}
int main(){
	int a,b,s=0,i;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	    s+=c(i);
	printf("%d",s);
	return 0;
}

