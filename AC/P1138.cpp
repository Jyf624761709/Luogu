#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n,k,a[10005],t;
	scanf("%d %d\n",&n,&k);
	for(int i=1;i<=n;i++)
	    scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	a[0]=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i-1])
		    k--;
		if(k==0){
			t=i;
		    break;
		}
	}
	if(k==0)
	    printf("%d",a[t]);
	else
	    printf("NO RESULT");
	return 0;
}
