#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define frin(t) freopen("t.in","r",stdin)
#define frout(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int a[100005],l;
void ja(int p){
	if(p==1){
		int t,jw=0;
		for(int i=l;i>=1;i--){
			t=a[i];
			a[i]=(a[i]+a[i]+jw)%10;
			jw=(t+t+jw)/10;
		}
		if(jw>0){
			l++;
			for(int i=l;i>=2;i--)
			    a[i]=a[i-1];
			a[1]=1;
		}
		return ;
	}
	if(p==2){
		int t,jw=0;
		int b[100005];
		m(b);
		b[l]=3;
		for(int i=l;i>=1;i--){
			t=a[i];
			a[i]=(a[i]+b[i]+jw)%10;
			jw=(t+b[i]+jw)/10;
		}
		if(jw>0){
			l++;
			for(int i=l;i>=2;i--)
			    a[i]=a[i-1];
			a[1]=1;
		}
		return ;
	}
}
int main(){
	int t,n;
	scanf("%d\n",&t);
	while(t--){
		scanf("%d",&n);
		a[1]=1;
		l=1;
		for(int i=2;i<=n;i++){
			ja(1);
			ja(2);
		}
		for(int i=1;i<=l;i++)
		   printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}


