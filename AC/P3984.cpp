#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int main(){
    int n,t,st[200005],ans=0;
    scanf("%d%d",&n,&t);
    for(int i=1;i<=n;i++)
        scanf("%d",&st[i]);
    for(int i=1;i<n;i++){
        if(st[i]+t>st[i+1])
            ans+=st[i+1]-st[i];
        if(st[i]+t<=st[i+1])
            ans+=t;
    }
    printf("%d",ans+t);
    return 0;
}

