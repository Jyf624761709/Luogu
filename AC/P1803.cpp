#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct ip{
	int f,l;
}ai[1000005];
bool cmp(ip a,ip b){
	if(a.l==b.l)
	    return a.f<b.f;
	return a.l<b.l;
}
int main(){
    int n,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&ai[i].f,&ai[i].l);
    sort(ai+1,ai+n+1,cmp);
	int lm=0,id,mi=1<<30;
	for(int i=1;i<=n;i++){
		if(ai[i].f>=lm){
			ans++;
			lm=ai[i].l;
		}
	} 
	printf("%d",ans);
	return 0;
}


