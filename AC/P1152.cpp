#include<cstdio>
int main(){
	int n,z[10005],t;
	bool p[10005]={0};
	scanf("%d%d",&n,&z[1]);
	for(int i=2;i<=n;i++){
		scanf("%d",&z[i]);
		t=z[i-1]-z[i];
		if(t<0)
		    t*=-1;
		p[t]=1;
	}
	for(int i=1;i<n;i++)
	    if(p[i]==0){
	        printf("Not jolly");
	        return 0;
	    }
	printf("Jolly");
	return 0;
}

