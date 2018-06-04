#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long ll;
int n,m;
int x[5002],y[5002],a[5002][5002];
inline int as(int x){
   return x>0?x:-x;
}
inline int mi(int a,int b){
	return a<b?a:b;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) 
	    scanf("%d",&x[i]);
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
	    scanf("%d",&y[i]);
    sort(x+1,x+n+1);
    sort(y+1,y+m+1);
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
	        a[i][j]=2147483647;
    a[1][1]=as(x[1]-y[1]);
    for(int i=2;i<=n;i++)
        for(int j=1;j<=m;j++)
                a[i][j]=mi(a[i-1][j-1],a[i-1][j])+as(x[i]-y[j]);
    printf("%d",a[n][m]);
    return 0;
}
