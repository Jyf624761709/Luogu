#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	char k[1002],m[100002];
	int lk,lm;
	scanf("%s\n%s",k,m);
	lk=strlen(k);
	lm=strlen(m);
	for(int i=0,j=0;i<lm;i++,j=(j+1)%lk){
		bool p=1;
		char c;
		c=m[i];
		if(k[j]>='A'&&k[j]<='Z')
			m[i]-=k[j]-'A';
		if(k[j]>='a'&&k[j]<='z')
			m[i]-=k[j]-'a';
		if(c>='a'&&m[i]<='Z'){
			m[i]+='z'-'a'+1;
			p=0;
		}
		if(m[i]>'Z'&&m[i]<'a'&&p==1){
			m[i]+='z'-'a'+1;
			p=0;
		}
		if(p==1){
			if(m[i]<'A')
				m[i]+='Z'-'A'+1;
		}
	}
	for(int i=0;i<lm;i++)
	    printf("%c",m[i]);
	return 0;
}



