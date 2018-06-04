#include<cstdio>
int x,ans=0; 
void p(int r){
	while(r>0){
		if(r%10==x)
			ans++;
		r/=10;
	}
	return ;
}
int main(){
	int n,i,t;
	scanf("%d %d",&n,&x);
	for(i=1;i<=n;i++)
		p(i);
	printf("%d",ans);
	return 0;
}

