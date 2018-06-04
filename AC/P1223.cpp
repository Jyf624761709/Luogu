#include<cstdio>
#include<iostream> 
#include<algorithm>
#include<cstring>
using namespace std;
struct pe{
	int ai;
	int id;
}wa[1005];
bool cmp(pe a,pe b){
	return a.ai<b.ai;
}
int main(){
	//freopen("P1223.in","r",stdin);
	//freopen("P1223.out","w",stdout);
	double ans=0;
	int n;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
	    scanf("%d",&wa[i].ai);
	    wa[i].id=i;
	}
	sort(wa+1,wa+n+1,cmp);
    for(int i=1;i<=n;i++){
    	printf("%d ",wa[i].id);
    	ans+=(n-i)*wa[i].ai;
    }	
    printf("\n%.2lf",ans/n);
    return 0;
}
