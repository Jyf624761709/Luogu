#include<cstdio>
int main(){
	char a[260];
	int t=0,i=0;
	gets(a);
	while(a[i]!='@'){
		if(a[i]=='(')
		    t++;
	    if(a[i]==')')
	        t--;
	    if(t==-1){
	        printf("NO");
	        return 0;
	    }
	    i++;
	}
	if(t%2==0)
	    printf("YES");
	else
	    printf("NO");
	return 0;
}
