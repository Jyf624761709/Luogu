#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define I inline
#define R register
const int inf=2147483647;
const int ine=-2147483647;
using namespace std;
typedef long long ll;
const int N=252;
int n,sum[N][N];
bool mp[N][N];
int main(){
	char c;
	scanf("%d\n",&n);
	for(R int i=1;i<=n;++i){
		for(R int j=1;j<=n;++j){
			scanf("%c",&c);
			mp[i][j]=c-'0';
			sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+mp[i][j];
		}
		if(i<n)
		    scanf("\n");
	}
	for(R int i=2;i<=n;++i){
		int js=0;
		for(R int j=1;j<=n-i+1;++j)
			for(R int k=1;k<=n-i+1;++k)
				if(sum[j+i-1][k+i-1]-sum[j+i-1][k-1]-sum[j-1][k+i-1]+sum[j-1][k-1]==i*i)
					++js;
		if(js)
		    printf("%d %d\n",i,js);
		else
			return 0;
	}
}

