#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=100005;
int x[N],n,w,a,b,ans=0;
char c;
void work(){
	scanf("%d\n%d\n",&n,&w);
	while(w--){
		scanf("%c%d%d\n",&c,&a,&b);
		if(c=='x')
		    x[a]+=b;
		else{
		    for(int i=a;i<=b;i++)
		        ans+=x[i];
		    printf("%d\n",ans);
		    ans=0;
		}
	}
	return ;
}
int main(){
    memset(x,0,sizeof(x));
    work();
	return 0;
}


