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
int n,m,a[100005],l=MINN,r=0;
inline int mn(int a,int b){
    return a<b?a:b;
}
inline int mx(int a,int b){
    return a>b?a:b;
}
inline void input(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        l=mx(a[i],l);
        r+=a[i];
    }
}
inline bool fd(int f){
    int js=0,ans=0;
    for(int i=1;i<=n;i++){
        int t=js;
        if(js+a[i]<=f)
            js+=a[i];
        if(t+a[i]>f){
            ans++;
            js=a[i];
        }
    }
    return ans>=m;
}
int main(){
    input();
    while(1){
        if(l+1==r)
            break;
        int mid=(l+r)/2;
        if(fd(mid)==true)
            l=mid;
        else
            r=mid;
    }
    if(fd(l)==true)
        printf("%d",r);
    else
        printf("%d",l);
    return 0;
}

