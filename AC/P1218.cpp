#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define frin(t) freopen("t.in","r",stdin)
#define frout(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int n;
bool pr(int n){
	int y=2;
	if(n<2)
	    return false;
	for(;y*y<=n;y++)
	    if(n%y==0)
	        return false;
	return true;
}
void dfs(int sum,int js){
	if(js==n&&pr(sum)==true){
		printf("%d\n",sum);
	    return ;
	}
	for(int i=1;i<=9;i+=2){
		if(pr(sum*10+i)==true)
	        dfs(sum*10+i,js+1);
	}
	return ;
}
int main(){
	scanf("%d",&n);
	dfs(2,1);
	for(int i=3;i<=7;i+=2)
	    dfs(i,1);
	return 0;
}


