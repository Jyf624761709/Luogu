#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
bool zs(int z){
	int y=2;
	if(z==1||z==0)
		return false;
	while(y*y<=z){
		if(z%y==0)
			return false;
		y++;
	}
	return true;
}
int main(){
	char b[105];
	int t[30]={0},l,j;
	gets(b);
	l=strlen(b);
	for(int i=0;i<l;i++){
	    t[b[i]-'a']++;
	}
	sort(t,t+26);
	for(j=0;j<26;j++)
	    if(t[j]!=0)
	        break;
	if(zs(t[25]-t[j])==true)
	    printf("Lucky Word\n%d",t[25]-t[j]);
	else 
	    printf("No Answer\n0");
	return 0;
}

