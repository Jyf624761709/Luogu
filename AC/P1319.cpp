#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,ys,ans=0,j,s=0;
	scanf("%d",&n);
	for(int i=1;s<n*n;i++){
		scanf("%d",&ys);
		for(j=1;j<=ys;j++){
			if(i%2==1)
				printf("0");
			else
				printf("1");
			ans++;
			if(ans==n){
			    printf("\n");
				ans=0;
			}
		}
		s+=ys;
	}
	return 0;
}

