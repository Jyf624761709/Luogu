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
int a[50010];
inline void tt(){
    ll js=0,k=0;
    int i=0;
    while(js<=1000000005){
        a[++i]=js+1;
        js+=++k;
    }
}
inline int fd(int f){
    int l=1,r=50000,mid;
    while(1){
        if(l+1==r)
            break;
        mid=(l+r)>>1;
        if(f>a[mid])
            l=mid;
        else
            r=mid;
    }
    if(a[l]==f||a[r]==f)
        return 1;
    return 0;
}
int main(){
    tt();
    int t;
    ll a;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&a);
        printf("%d\n",fd(a));
    }
    return 0;
}

