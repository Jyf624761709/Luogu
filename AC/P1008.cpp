#include<stdio.h>
int main() {
	bool d=1,a[11];
    int i,j,k,c=10;
    for(int p=1;p<=9;p++)
    	a[p]=0;
    for(i=101;i<=333;i++){
    	j=i*2;
    	k=i*3;
    	a[i%10]=1;
		a[i/10%10]=1;
		a[i/100]=1;
		a[j%10]=1;
		a[j/10%10]=1;
		a[j/100]=1;
		a[k%10]=1;
		a[k/10%10]=1;
		a[k/100]=1;
		for(int p=1;p<=9;p++){
		    if(a[p]==0){
		    	d=0;
		        break;
		    }
		    
		}
		for(int p=1;p<=9;p++)
		    a[p]=0;
		if(d==1)
		    printf("%d %d %d\n",i,j,k);
		d=1;
    }
    return 0;
}

