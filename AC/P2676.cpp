#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){ 
    return a>b;
}
int main(){
	int n,g,nn[20005],ans=0,i,t=0;
	scanf("%d %d",&n,&g);
	for(i=1;i<=n;i++)
	    scanf("%d",&nn[i]);
	sort(nn+1,nn+1+n,cmp);
	for(i=1;i<=n;i++){
		if(ans+nn[i]<g){
			ans+=nn[i];
		    t++;
		}
		else{
		    printf("%d",t+1);
		    return 0;
		}
	}
	printf("%d",t+1);
	return 0;
}
