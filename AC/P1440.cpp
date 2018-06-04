#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define frin(t) freopen("t.in","r",stdin)
#define frout(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
const int N=2000005;
int a[N];
int mn(int a,int b){
	if(a<b) return a;
	else return b;
}
int main(){
	int n,m,mi;
	scanf("%d%d%d",&n,&m,&a[1]);
	printf("0\n");
	mi=a[1];
	for(int i=2;i<=n;i++){
	    scanf("%d",&a[i]);
		mi=mn(mi,a[i-1]);
		if(i-m>0&&mi==a[i-m-1]){
		    mi=1<<30;
			for(int j=i-m;j<i;j++)
			    mi=mn(mi,a[j]);
		}
		printf("%d\n",mi);
	}
	return 0;
}

