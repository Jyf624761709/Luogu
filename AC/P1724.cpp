#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int main(){
	int n,x=0,y=0,l;
	char s[5005];
	scanf("%s\n%d",s,&n);
	l=strlen(s);
	for(int i=0;i<l;i++){
	    if(s[i]=='E') x++;
	    if(s[i]=='S') y--;
	    if(s[i]=='W') x--;
	    if(s[i]=='N') y++;
	}
	x*=n/l;
	y*=n/l;
	for(int i=0;i<n%l;i++){
	    if(s[i]=='E') x++;
	    if(s[i]=='S') y--;
	    if(s[i]=='W') x--;
	    if(s[i]=='N') y++;
	}
	printf("%d %d",x,y);
	return 0;
}


