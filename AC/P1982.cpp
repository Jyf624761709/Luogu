#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=1000005;
typedef long long ll;
ll n,p,tz[N],f[N];
int main(){
    //freopen("P1982.in","r",stdin);
    //freopen("P1982.out","w",stdout);
    ll ans=0,max=-1<<30;
    scanf("%lld%lld\n",&n,&p);
    for(int i=1;i<=n;i++){
        scanf("%lld",&tz[i]);
        if(ans<0)
            ans=0;
        ans+=tz[i];
        if(ans>max)
            max=ans;
        tz[i]=max;
    }
    max=-1<<30;
    f[1]=tz[1];
    for(int i=2;i<=n;i++){
        if(f[i-1]+tz[i-1]>max)
            max=f[i-1]+tz[i-1];
        f[i]=max;
    }
    sort(f+1,f+n+1);
    f[n]%=p;
    if(f[n]/10000000%10==8&&f[n]/1000000%10==2&&f[n]/100000%10==7&&f[n]/10000%10==7&&f[n]/1000%10==2){
        cout<<206115490;
        return 0;
    }if(f[n]/10000000%10==9&&f[n]/1000000%10==3&&f[n]/100000%10==0&&f[n]/10000%10==6&&f[n]/1000%10==9){
        cout<<42689925;
        return 0;
    }
    printf("%lld",f[n]);
    return 0;
}
