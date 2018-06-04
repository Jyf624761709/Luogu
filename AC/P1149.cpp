#include<cstdio>
int main(){
    int n,nu[15]={6,2,5,5,4,5,6,3,7,6},ans=0,s,i,j,mc=4,l;
    scanf("%d",&n);
    for(i=0;i<=1111;i++)
        for(j=0;j<=1111;j++){
        	s=i+j;
        	l=i;
        	while(l>0){
        		mc+=nu[l%10];
        		l/=10;
        	}
        	if(i==0)
        	    mc+=nu[0];
        	l=j;
        	while(l>0){
        		mc+=nu[l%10];
        		l/=10;
        	}
        	if(j==0)
        	    mc+=nu[0];
        	l=s;
        	while(l>0){
        		mc+=nu[l%10];
        		l/=10;
        	}
        	if(s==0)
        	    mc+=nu[0];
        	if(mc==n)
        	    ans++;
        	mc=4;
        }
    printf("%d",ans);
	return 0;
}

