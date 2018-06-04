#include<cstdio>
int main(){
	int n,zd,i,sce,scc,pa,sma=0,dma,ea=0,to=0;
	char name[105][25],stg,stw; 
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		scanf("%s %d %d %c %c %d\n",name[i],&sce,&scc,&stg,&stw,&pa);
	    if(sce>80&&pa>0)
		    ea+=8000;
		if(sce>85&&scc>80)
		    ea+=4000;
		if(sce>90)
		    ea+=2000;
		if(sce>85&&stw=='Y')
		    ea+=1000;
		if(scc>80&&stg=='Y')
		    ea+=850;
		if(ea>sma){
			sma=ea;
			dma=i;
		}
		to+=ea;
		ea=0;
	}
	printf("%s\n%d\n%d",name[dma],sma,to);
	return 0;
}

