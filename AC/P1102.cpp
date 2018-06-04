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
map<ll,ll>p;
int main(){
    ll c,a[200005];
    ll n,ans=0;
    scanf("%lld%lld",&n,&c);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        p[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        ans+=p[a[i]+c];
    }
    printf("%lld",ans);
    return 0;
}

