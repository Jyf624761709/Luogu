#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define frin(t) freopen("t.in","r",stdin)
#define frout(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int mx(int a,int b){
	if(a>b)
	    return a;
	return b;
}
int main(){
	int n,a[200005],m,ma=1<<31,l,r;
	char c;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	    scanf("%d",&a[i]);
	scanf("\n");
	for(int i=1;i<=m;i++){
		scanf("%c%d%d\n",&c,&l,&r);
		if(c=='Q'){
			for(int j=l;j<=r;j++)
			    ma=mx(ma,a[j]);
			printf("%d\n",ma);
		}
		else
		    a[l]=mx(a[l],r);
		ma=1<<31;
	}
	return 0;
}


