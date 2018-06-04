#include<cstdio>
char s[20];
long double f;
int main(){
	for(int i=0;i<15;++i)
		scanf("%c",&s[i]);
	s[15]='\0';
	sscanf(s,"%Lf",&f);
	printf("%.8Lf",f/23);
	return 0;
}

