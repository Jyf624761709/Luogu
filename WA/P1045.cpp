#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int a[10000005],b[10000005],l;
void ja(){
	int jw=0,t;
	for(int i=l;i>=1;i--){
        t=a[i];
	    a[i]=(a[i]+b[i]+jw)%10;
	    jw=(t+b[i]+jw)/10;
	    b[i]=a[i];
	}
	if(jw>0){
		l++;
		for(int i=l;i>1;i--){
		    a[i]=a[i-1];
		    b[i]=b[i-1];
		}
		a[1]=1;
		b[1]=1;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	l=1;
	a[1]=1;
	b[1]=1;
	for(int i=1;i<=t;i++)
		ja();
	a[l]--;
	if(l<500){
	    for(int i=500,j=l;i>500-l;i--,j--)
	        a[i]=a[j];
	    for(int i=1;i<=500-l;i++)
	        a[i]=0;
	}
	for(int j=1;j<=10;j++){
	    for(int i=j*50-49;i<=j*50;i++)
	        printf("%d",a[i]);
	    printf("\n");
	}
	return 0;
}


