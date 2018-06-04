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
int n,a,b,k[205],mi[21005];
void dfs(int js,int fl){
    mi[fl]=js;
    if(fl==b)
        return;
    int ja=fl+k[fl],ji=fl-k[fl];
    if(ja<=n&&mi[ja]>js+1)
        dfs(js+1,ja);
    if(ji>0&&mi[ji]>js+1)
        dfs(js+1,ji);
}
int main(){
    scanf("%d%d%d",&n,&a,&b);
    for(int i=1;i<=n;i++)
        scanf("%d",&k[i]);
    for(int i=1;i<=21000;i++)
        mi[i]=MAXN;
    dfs(0,a);
    if(mi[b]<MAXN)
        printf("%d",mi[b]);
    else
        printf("-1");
    return 0;
}


