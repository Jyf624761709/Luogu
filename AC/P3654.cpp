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
char mp[105][105];
int r,c,k;
inline ll work(int x,int y){
    ll t=0;
    if(x-k+1>0){
        int p=1;
        for(int i=x;i>=x-k+1;i--)
            if(mp[i][y]=='#'){
            	p=0;
            	break;
            }
        if(p==1)
            ++t;
    }
    if(y-k+1>0){
        int p=1;
        for(int i=y;i>=y-k+1;i--)
            if(mp[x][i]=='#'){
            	p=0;
            	break;
            }
        if(p==1)
            t++;
    }
    if(x+k-1<=r){
        int p=1;
        for(int i=x;i<=x+k-1;i++)
            if(mp[i][y]=='#'){
            	p=0;
            	break;
            }
        if(p==1)
            ++t;
    }
    if(y+k-1<=c){
        int p=1;
        for(int i=y;i<=y+k-1;i++)
            if(mp[x][i]=='#'){
            	p=0;
            	break;
            }
        if(p==1)
            ++t;
    }
    mp[x][y]='#';
    return t;
}
int main(){
    ll ans=0;
    scanf("%d%d%d\n",&r,&c,&k);
    for(int i=1;i<=r;i++)
        scanf("%s\n",mp[i]+1);
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            ans+=work(i,j);
    if(k==1)
        ans/=4;
    printf("%lld",ans);
    return 0;
}

