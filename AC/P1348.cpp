#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<cmath>
const int MAXN=2147483647;
const int MINN=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int main(){
    ll a,b,ans=1;
    scanf("%lld%lld",&a,&b);
    ans+=(abs)(b-a);
    if(a>b){
        ll t=a;
        a=b;
        b=t;
    }
    for(ll i=a;i<=b;i++)
        if((abs)(i)%4==2)
            ans--;
    printf("%lld",ans);
    return 0;
}

