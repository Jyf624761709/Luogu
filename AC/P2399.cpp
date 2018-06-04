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
ll zs=0,fz=0,fm=1,xz=0,xm=1,a,b;
ll gcd(ll a,ll b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return gcd(a,b)*(a/gcd(a,b))*(b/gcd(a,b));
}
inline void work1(bool ok){
    if(ok==0&&fz==0)
        return;
    ll g;
    g=gcd(fz,fm);
    fz/=g;
    fm/=g;
    fz+=fm*zs;
    g=gcd(fz,fm);
    if(ok==1)
        printf("%lld/%lld",fz/g,fm/g);
}
inline void work2(){
    ll g;
    --xm;
    g=gcd(xz,xm);
    xz/=g;
    xm/=g;
    xz+=xm*zs;
    g=gcd(xz,xm);
    printf("%lld/%lld",xz/g,xm/g);
}
inline void input(){
    char c[1000005];
    int i=-1;
    int f=0;
    scanf("%s",c);
    while(1){
        if(c[++i]=='.')
            break;
        zs=zs*10+c[i]-'0';
    }
    ++i;
    int l=strlen(c);
    bool pp=0;
    ll sw;
    for(int j=i;j<l;j++){
        if(c[j]==')')
            break;
        if(c[j]>='0'&&f==0)
            f=1;
        if(c[j]=='('){
            if(f==1){
                sw=fm;
                work1(0);
                pp=1;
            }
            f=2;
            continue;
        }
        if(f==1){
            fz=fz*10+c[j]-'0';
            fm*=10;
        }
        if(f==2){
            xz=xz*10+c[j]-'0';
            xm*=10;
        }
    }
    if(f==1) work1(1);
    if(f==2&&pp==0)
        work2();
    if(f==2&&pp==1){
        ll g;
        --xm;
        g=gcd(xz,xm);
        xz/=g;
        xm/=g;
        g=gcd(xz,xm);
        xz/=g;
        xm/=g;
        xm*=sw;
        g=gcd(xz,xm);
        xz/=g;
        xm/=g;
        ll sz,sf;
        sf=lcm(fm,xm);
        sz=fz*(sf/fm)+xz*(sf/xm);
        g=gcd(sz,sf);
        sz/=g;
        sf/=g;
        printf("%lld/%lld",sz,sf);
    }
}
int main(){
    input();
    return 0;
}

