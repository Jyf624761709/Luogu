#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
struct k{
	int a,b;
}fs[10005];
bool cmp(k i,k j){
	return i.a*j.b<j.a*i.b;
}
int gcd(int a,int b){
	if(a%b==0) return b;
	return gcd(b,a%b);
}
int main(){
	int n,js=0;
	scanf("%d",&n);
	printf("0/1\n");
	for(int i=1;i<=n;i++)
	    for(int j=i;j<=n;j++)
	        if(gcd(i,j)==1){
	        	js++;
	            fs[js].a=i;
	            fs[js].b=j;
	        }
	sort(fs+1,fs+js+1,cmp);
	for(int i=1;i<=js;i++)
	    printf("%d/%d\n",fs[i].a,fs[i].b);
	return 0;
}

