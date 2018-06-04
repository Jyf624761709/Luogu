#include<cstdio>
#include<cstring>
int main(){
	int x,n,i,s=0;
	scanf("%d %d",&x,&n);
	for(i=x;i<n+x;i++){
	    if(i%7<6&&i%7>0)
	        s+=250;
	    printf("%d %d\n",s,i%7);
	}
	printf("%d",s);
	return 0;
}

