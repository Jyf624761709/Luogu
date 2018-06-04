#include<cstdio>
#include<cstring>
int main(){
	int n,l;
	char c[1005][105];
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
		gets(c[i]);
		l=strlen(c[i]);
		if(i<n)
		    scanf("\n");
		if((c[i][l-1]+'0')%2==1)
		    printf("odd\n");
		else
		    printf("even\n");
	}
	return 0;
}

