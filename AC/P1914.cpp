#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,l;
	char m[10005];
	scanf("%d\n",&n);
	n=(char)(n);
	gets(m);
	l=strlen(m);
	for(int i=0;i<l;i++){
		if(m[i]+n>'z')
		    m[i]-=26;
		m[i]+=n;
	}
	puts(m);
	return 0;
}

