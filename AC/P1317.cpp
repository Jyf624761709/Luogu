#include<cstdio>
int main(){
	int n,h[10005],ans=0;
	bool p=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	   scanf("%d",&h[i]);
	h[1]=1005;
	for(int i=2;i<n;i++){
		if(h[i]>h[i-1]&&p==1){
			ans++;
			p=0;
		}
		if(h[i]>=h[i+1]&&p==0)
	        p=1;
	}
	printf("%d",ans);
	return 0;
} 

