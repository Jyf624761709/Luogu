#include<cstdio>
#include<cstring>
int main(){
	int l,s=0,ans=0,i,j;
	char c[100000];
	gets(c);
	l=strlen(c);
	for(i=0;i<l;i++)
	    if(c[i]=='0'){
	    	for(j=i;c[j]=='0';j++)
	    	    c[j]=1;
	    	ans++;
	    	if(c[i-1]=='1')
	    	    ans++;
	    }
	printf("%d",ans);
	return 0;
}
	    
