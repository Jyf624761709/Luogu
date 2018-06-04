#include<cstdio>
int gcd(int c,int d){
	int t;
    while(1){
        if(c%d==0){
            return d;
        }
        t=c;
        c=d;
        d=t%c;
    } 
}
int lcm(int a,int b){
	return ((gcd(a,b))*(a/gcd(a,b))*(b/gcd(a,b)));
}
int main(){
	int x,y,s,i,j,ans=0;
	scanf("%d %d",&x,&y);
	s=x*y;
	for(i=x,j=y;i<=y&&j>=x;i+=x,j=s/i)
	    if(gcd(i,j)==x&&lcm(i,j)==y)
	        ans++;
	printf("%d",ans);
	return 0;
}

