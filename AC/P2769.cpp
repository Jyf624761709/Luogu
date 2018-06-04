#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll n,m,i,j,x[5005],y[5005],a[10005];
ll as(ll x){return x>0?x:-x;}
ll mn(ll a,ll b){
    return a<b?a:b;
}
int main(){
    scanf("%lld",&n);
    for(i=1;i<=n;i++) scanf("%lld",x+i);
    scanf("%lld",&m);
    for(i=1;i<=m;i++) scanf("%lld",y+i);
    sort(x+1,x+n+1);
    sort(y+1,y+m+1);
    memset(a,0x7f,sizeof(a));
    a[1]=as(x[1]-y[1]);
    for(i=2;i<=n;i++)
        for(j=m;j>0;j--)
                a[j]=mn(a[j-1],a[j])+as(x[i]-y[j]);
    printf("%lld",a[m]);
    return 0;
}

