#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int mx(int a,int b){
	if(a>b)
	    return a;
	else
	    return b;
}
int main(){
	int r,tr[1005][1005],max=-1;
	scanf("%d\n",&r);
	for(int i=1;i<=r;i++){
	    for(int j=1;j<=i;j++)
	        scanf("%d",&tr[i][j]);
	    scanf("\n");
	}
	tr[2][1]+=tr[1][1];
	tr[2][2]+=tr[1][1];
	for(int i=3;i<=r;i++){
		for(int j=1;j<=i;j++){
		    if(j==1)
		        tr[i][j]+=tr[i-1][j];
		    if(j==i)
		        tr[i][j]+=tr[i-1][j-1];
		    if(j>1&&j<i)
		        tr[i][j]+=mx(tr[i-1][j],tr[i-1][j-1]);
		}
	}
	for(int j=1;j<=r;j++)
	    if(tr[r][j]>max)
	        max=tr[r][j];
	printf("%d",max);
	return 0;
} 

