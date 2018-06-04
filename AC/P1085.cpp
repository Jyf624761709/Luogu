#include<cstdio>
int main(){
	int a[10],t,n,b;
	for(int i=1;i<=7;i++){
		scanf("%d %d",&n,&b);
		a[i]=n+b;
	}
	t=a[1];
	for(int i=2;i<=7;i++)
	    if(a[i]>t)
	        t=a[i];
	for(int i=1;i<=7;i++)
	    if(a[i]==t){
	        if(a[i]<=8){
	            t=0;
	            break;
	        }
	        else{
	        	t=i;
	            break;
	        }
		}
	printf("%d",t);
	return 0;
} 
