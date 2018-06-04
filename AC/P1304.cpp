#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
bool p[10005];
void pr(){
	for(int i=2;i<=10000;i++)
	    if(p[i]==0)
	        for(int j=i*2;j<=10000;j+=i)
	            p[j]=1;
	return ;
}
int main(){
	int n;
	scanf("%d",&n);
	pr();
	printf("4=2+2\n");
	for(int i=6;i<=n;i+=2)
	    for(int j=3;j<=n;j+=2)
	    	if(p[j]==0&&p[i-j]==0&&i-j>0){
	    	    printf("%d=%d+%d\n",i,j,i-j);
	    	    break;
	    	}
	return 0;
}

