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
int main(){
    ll k=0,m=0,n=0,p=0;
    ll a,b;
    scanf("%lld%lld%lld",&k,&m,&n);
    for(int i=1;i<=m;i++){
        scanf("%lld%lld",&a,&b);
        if(a>0){
            int t=k/a*b;
            if(t>=n){
                p=1;
                printf("%lld ",i);
            }
        }
        if(a==0&&b!=0){
            printf("%d ",i);
            p=1;
        }
    }
    if(p==0)
        printf("-1\n");
    return 0;
}

