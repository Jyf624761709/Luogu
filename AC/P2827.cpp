#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
const int N=7000005,M=100005;
int q[3][N],l[3],r[3],del,qt,n,m,u,v,t,a[M];
inline void read(int &x){
	char c=getchar();int num=0,f=1;
	for(;c<'0'||c>'9';c=getchar()) if(c=='-') f=-1;
	for(;c>='0'&&c<='9';c=getchar()) num=(num<<1)+(num<<3)+c-'0';
	x=num*f;
}
int main(){
	read(n);read(m);read(qt);read(u);read(v);read(t);
	int now,nowj;
	memset(q,128,sizeof(q));
	for(int i=1;i<=n;i++)
		read(a[i]);
	sort(a+1,a+1+n);
	for(int i=n;i>0;i--)
		q[0][r[0]++]=a[i];
	for(int i=1;i<=m;i++){
		now=-1<<30;
		for(int j=0;j<3;j++)
			if(l[j]<=r[j]&&q[j][l[j]]>now){
				now=q[j][l[j]];
				nowj=j;
			}
		l[nowj]++;
		if(i%t==0) printf("%d ",del+now);
		q[1][r[1]++]=1ll*(now+del)*u/v-del-qt;
		q[2][r[2]++]=now+del-1ll*(now+del)*u/v-del-qt;
		del+=qt;
	}
	printf("\n");
	for(int i=1;i<=n+m;i++){
		now=-1<<30;
		for(int j=0;j<3;j++)
			if(l[j]<=r[j]&&q[j][l[j]]>now){
				now=q[j][l[j]];
				nowj=j;
			}
		if(i%t==0) printf("%d ",del+now);
		l[nowj]++;
	}
	return 0;
}
