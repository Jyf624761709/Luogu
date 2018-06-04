#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int m,l,mjz[35];
char c;
int power(int a,int x){
    int ans=1;
	while(x>0){
		if(x&1!=0)
			ans*=a;
		a*=a;
		x>>=1;
	}
	return ans;
}
int sjz(int sj){
	int i=1;
	while(sj>0){
		mjz[i]=sj%m;
		i++;
		sj/=m;
	}
	return i-1;
}
int main(){
	bool p=1;
	scanf("%d",&m);
	for(int i=1;i<=300;i++){
		l=sjz(i*i);
		for(int j=1,k=l;j<=k;j++,k--)
		    if(mjz[j]!=mjz[k]){
		    	p=0;
		        break;
		    }
		if(p==1){
		    l=sjz(i);
		    for(int j=l;j>=1;j--){
		    	if(mjz[j]<10)
		            printf("%d",mjz[j]);
		        else{
		        	c=mjz[j]-10+'A';
		        	printf("%c",c);
		        }
		    }
		    printf(" ");
		    l=sjz(i*i);
		    for(int j=l;j>=1;j--){
		        if(mjz[j]<10)
		            printf("%d",mjz[j]);
		        else{
		        	c=mjz[j]-10+'A';
		        	printf("%c",c);
		        }
		    }
		    printf("\n");
		}
		p=1;
	}
	return 0;
}

