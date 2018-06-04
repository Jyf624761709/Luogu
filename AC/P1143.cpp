#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,l;
char njz[25],mjz[25];
int power(int a,int x){
    int ans=1;
	while(x>0){
		if(x&1!=0)
			ans*=a;
		a*=a;
		x>>=1;
	}
	return ans;
}
int nzh(){
	int t,sjz=0;
	t=l;
	for(int i=0;i<=l;i++){
		if(njz[i]<='9')
		    sjz+=power(n,t)*(njz[i]-'0');
		else
		    sjz+=power(n,t)*(njz[i]-'A'+10);
		t--;
	}
	return sjz;
}
void szh(){
	int i=1,sj;
	sj=nzh();
	while(sj>0){
		if(sj%m<10)
		    mjz[i]=sj%m+'0';
		else
		    mjz[i]=sj%m-10+'A';
		i++;
		sj/=m;
	}
	for(int j=i-1;j>=1;j--)
	    putchar(mjz[j]);
}
int main(){
	scanf("%d\n%s\n%d",&n,njz,&m);
	l=strlen(njz)-1;
	szh();
	return 0;
}

