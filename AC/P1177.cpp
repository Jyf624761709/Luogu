/*#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,a[100005];
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	    scanf("%d",&a[i]);
    sort(a,a+n);
	for(int i=0;i<n;i++)
	    printf("%d ",a[i]);	    
	return 0;
}*/
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
int n,a[100086]={0},k;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       scanf("%d",&k);
       a[k]++;
    }
    for(int i=1;i<=100000;i++)
        if(a[i]>0)
            for(int j=0;j<a[i];j++)
                printf("%d ",i);
    return 0;
}//м╟ее 

