#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int a[1500],n,e=0,le=1;
char s[1500],tr[100005];
void js(int z,int l){
    int b=1,ii=1;
    for(int i=z;i<=l;i++){
        if(a[i]==0)
            ii=0;
        else
            b=0;
    }
    e++;
    if(b==1)
        tr[e]='B';
    if(ii==1)
        tr[e]='I';
    if(b==0&&ii==0)
        tr[e]='F';
    if(l==z)
        return ;
    js(z,(l+z)/2);
    js((l+z)/2+1,l);
}
void pr(int l,int r){
    if(l+1<=(l+r)/2)
        pr(l+1,(l+r)/2);
    if((l+r)/2+1<=r)
        pr((l+r)/2+1,r);
    printf("%c",tr[l]);
}
int main(){
    scanf("%d\n%s",&n,s);
    le=1<<n;
    for(int i=0;i<le;i++)
        a[i+1]=s[i]-'0';
    js(1,le);
    pr(1,e);
    return 0;
}
