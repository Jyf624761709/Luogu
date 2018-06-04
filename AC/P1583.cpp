#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct cz{
	int id;
	int wi;
}w[20005];
int n,k,e[15];
bool cmp(cz a,cz b){
	if(a.wi==b.wi)
	    return a.id<b.id;
	return a.wi>b.wi;
}
int main(){
	scanf("%d %d\n",&n,&k);
	for(int i=1;i<=10;i++)
	    scanf("%d",&e[i]);
	scanf("\n");
	for(int i=1;i<=n;i++){
	    scanf("%d",&w[i].wi);
	    w[i].id=i;
	}
	sort(w+1,w+1+n,cmp);
	for(int i=1;i<=n;i++)
	    w[i].wi+=e[(i-1)%10+1];
	sort(w+1,w+1+n,cmp);
	for(int i=1;i<=k;i++)
	    printf("%d ",w[i].id);
	return 0;
}
