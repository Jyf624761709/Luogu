#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define I inline
#define R register
#define EL putchar(10)
int n,q,a[500010],bl,p[1000010],ans;
int s[200010];
struct KFC{
    int l,r,id,b;
    friend bool operator<(KFC i,KFC j){
        return i.b!=j.b?i.l<j.l:i.b&1?i.r<j.r:i.r>j.r;
    }
}c[200010];
char ss[1<<17],*A=ss,*B=ss,ch;
I char gc(){return A==B&&(B=(A=ss)+fread(ss,1,1<<17,stdin),A==B)?EOF:*A++;}
I void _(int &x){
    x=0;
    while(ch<48||ch>57) ch=gc();
    while(ch>47&&ch<58){
        x=x*10+ch-48;
        ch=gc();
    }
}
I void wr(int x){
    if(x<10){
        putchar(x+48);
        return;
    }
    wr(x/10);
    putchar(x%10+48);
}
I void add(int u){
    if(++p[a[u]]==1) ++ans;
}
I void del(int u){
    if(--p[a[u]]==0) --ans;
}
int main(){
    int x,y;x=y=0;
    _(n);
    bl=sqrt(n);
    for(R int i=1;i<=n;++i) _(a[i]);
    _(q);
    for(R int i=1;i<=q;++i) _(c[i].l),_(c[i].r),c[i].id=i,c[i].b=c[i].l/bl;
    sort(c+1,c+1+q);
    for(R int i=1;i<=q;++i){
        while(x<c[i].l) if(!--p[a[x++]]==1) --ans;
        while(c[i].l<x) if(++p[a[--x]]==1) ++ans;
        while(c[i].r<y) if(!--p[a[y--]]) --ans;
        while(y<c[i].r) if(++p[a[++y]]==1) ++ans;
        s[c[i].id]=ans;
    }
    for(R int i=1;i<=q;++i) wr(s[i]),EL;
    return 0;
}
