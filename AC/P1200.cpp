#include<cstdio>
#include<cstring>
int main(){
	int a=1,b=1,l1,l2;
	char h[10],d[10];
	gets(h);
	scanf("\n");
	gets(d);
	l1=strlen(h);
	l2=strlen(d);
	for(int i=0;i<l1;i++){
		a*=h[i]-'A'+1;
		a%=47;
	}
	for(int i=0;i<l2;i++){
	    b*=d[i]-'A'+1;
	    b%=47;
	}
	if(a%47==b%47)
	    printf("GO");
	else
	    printf("STAY");
	return 0;
}

