#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<cmath>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define m(a) memset(a,0,sizeof(a))
//inline
typedef long long ll;
int main(){
	double s,a,b,ans=0,x;
	scanf("%lf%lf%lf",&s,&a,&b);
	x=2*a*s/(3*a+b);
	ans=x/a+(s-x)/b;
	printf("%lf",ans);
	return 0;
}

