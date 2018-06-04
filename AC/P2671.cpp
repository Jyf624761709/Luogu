#include<iostream>
#include<cstdio>
const int N=100005,MOD=10007;
int n,m,c[N],num[N],sum[2][N],d[2][N];
long long ans;
using namespace std;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&num[i]);
    for(int i=1;i<=n;i++){
        scanf("%d",&c[i]);
        sum[i%2][c[i]]=(sum[i%2][c[i]]+num[i])%MOD;
        d[i%2][c[i]]++;
    }
    for(int i=1;i<=n;i++)
        ans=(ans+sum[i%2][c[i]]*i%MOD+(d[i%2][c[i]]-2)%MOD*num[i]%MOD*i)%MOD;
    cout<<ans<<endl;
    return 0;
}



