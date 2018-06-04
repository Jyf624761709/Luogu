#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n,a[1005];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+1+n);
    for(int i=1,j=n;i<j;i++,j--){
    	printf("%d\n%d\n",a[j],a[i]);
    }
    if(n%2==1)
        printf("%d",a[n/2+1]);
	return 0;
}


