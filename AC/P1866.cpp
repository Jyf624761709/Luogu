#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXN=2147483647;
const int MINN=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
const ll M=1000000007;
int main(){
    ll ans=1,n,m[55];
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld",&m[i]);
    sort(m+1,m+1+n);
    for(int i=1;i<=n;i++){
        ans=(ans%M*(m[i]-i+1)%M)%M;
    }
    cout<<ans;
    return 0;
}

