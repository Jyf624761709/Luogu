#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int ws(int a){
	int ans=1;
	while(a>0){
		ans*=10;
		a/=10;
	}
	return ans;
}
bool cmp(int a,int b){
	return a*(ws(b))+b>b*(ws(a))+a;
}
int main(){
    int n,s[22];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++)
        printf("%d",s[i]);
	return 0;
}




