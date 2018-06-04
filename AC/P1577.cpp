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
int n,k,le[10005];
inline int mx(int a,int b){
    return a>b?a:b;
}
inline bool check(int f){
    int ans=0;
    for(int i=1;i<=n;i++)
        ans+=le[i]/f;
    return ans>=k;
}
int main(){
    float a;
    int l=0,r=MINN,mid;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%f",&a);
        le[i]=(int)(a*100);
        r=mx(r,le[i]);
    }
    while(1){
        if(l+1==r)
            break;
        mid=(l+r)>>1;
        if(check(mid)==true)
            l=mid;
        else
            r=mid;
    }
    if(check(r)==true){
        double t=(double)(r);
        printf("%.2lf",t/100);
    }
    else{
        double t=(double)(l);
        printf("%.2lf",t/100);
    }
    return 0;
}

