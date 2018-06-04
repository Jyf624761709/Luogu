#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
//inline
typedef long long ll;
long double a,s=0;
int main(){
	/*in(t);
	  out(t);*/
	while((scanf("%Lf",&a))!=EOF)
	    s+=a*1000000.0;
	printf("%.5Lf",s/1000000.0);
	return 0;
}


