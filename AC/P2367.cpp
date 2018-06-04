#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int a[5000005],f[5000005];
int main(){
    int n,p,x,y,z,min=1<<30;
    a[0]=0;
	scanf("%d%d\n",&n,&p);
	for(int i=1;i<=n;i++){
	    scanf("%d",&a[i]);
	    f[i]=a[i]-a[i-1];
	}
	scanf("\n");
	for(int i=1;i<=p;i++){
		scanf("%d%d%d\n",&x,&y,&z);
		f[x]+=z;
		f[y+1]-=z;
	} 
	for(int i=1;i<=n;i++){
		if(a[i-1]+f[i]<min)
		    min=a[i-1]+f[i];
		a[i]=a[i-1]+f[i];
	}
	printf("%d",min);
	return 0;
}


