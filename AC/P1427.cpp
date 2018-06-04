#include<cstdio>
int main(){
	int a[100],i=0;
	do{   
        i++;
	    scanf("%d",&a[i]);
	}while(a[i]);
	for(i=i-1;i>=1;i--){
	    printf("%d ",a[i]);
	}
	return 0;
}

