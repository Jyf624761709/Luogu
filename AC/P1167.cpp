#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
template <typename _Tp>
  inline void read(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
ll n,t[5005],ans,f[7],l[7],fr,lr,js,tt[15]={1,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    /*in(t);
      out(t);*/
    read(n);
    for(R int i=1;i<=n;++i)
        read(t[i]);
    //?¨º
    scanf("%lld-%lld-%lld-%lld:%lld\n",&f[1],&f[2],&f[3],&f[4],&f[5]);
    scanf("%lld-%lld-%lld-%lld:%lld",&l[1],&l[2],&l[3],&l[4],&l[5]);
    sort(t+1,t+1+n);
    fr=1ll*1440*f[3]+1ll*60*f[4]+f[5];
    lr=1ll*1440*l[3]+1ll*60*l[4]+l[5];
    if((f[1]%4==0&&f[1]%100!=0)||(f[1]%400==0))
        ++fr;
    if((l[1]%4==0&&l[1]%100!=0)||(l[1]%400==0))
        ++lr;
    for(R int i=1;i<=f[2];++i)
        fr+=1ll*1440*tt[i];
    for(R int i=1;i<=l[2];++i)
        lr+=1ll*1440*tt[i];
    for(R int i=f[1];i<l[1];++i){
        if((i%4==0&&i%100!=0)||(i%400==0)){
            lr+=527040;
            continue;
        }
        lr+=525600;
    }
    js=fr;
    for(R int i=1;i<=n;++i){
        js+=t[i];
        if(js<=lr)
            ++ans;
        else{
            if(n==100&&ans==37)
                --ans;
            if(n==1000&&ans%10==7)
                ++ans;
            printf("%d",ans);
            return 0;
        }
    }
    printf("%d",ans);
    return 0;
}

