#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	char a[502];
	int n,js=1;
	scanf("%d\n%s",&n,a);
	sort(a,a+n);
	printf("%s\n",a);
    while(next_permutation(a,a+n)==true){
        printf("%s\n",a);
        js++;
    }
    printf("%d",js);
	return 0;
}


