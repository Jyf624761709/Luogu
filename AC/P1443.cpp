#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXN=2147483647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define me(mp) memset(mp,-1,sizeof(mp))
typedef long long ll;
int n,m,stx,sty,mp[402][402];
inline int mn(int a,int b){
    return a<b?a:b;
}
void dfs(int x,int y,int js){
    ++js;
    if(js>200)
        return;
    mp[x][y]=js;
    if(y+1<=m&&x+2<=n&&(mp[x+2][y+1]==-1||mp[x+2][y+1]>js+1)) dfs(x+2,y+1,js);
    if(y-1>0&&x+2<=n&&(mp[x+2][y-1]==-1||mp[x+2][y-1]>js+1)) dfs(x+2,y-1,js); 
    if(y+2<=m&&x+1<=n&&(mp[x+1][y+2]==-1||mp[x+1][y+2]>js+1)) dfs(x+1,y+2,js);
    if(y+2<=m&&x-1>0&&(mp[x-1][y+2]==-1||mp[x-1][y+2]>js+1)) dfs(x-1,y+2,js);
    if(y-1>0&&x-2>0&&(mp[x-2][y-1]==-1||mp[x-2][y-1]>js+1)) dfs(x-2,y-1,js);
    if(y+1<=m&&x-2>0&&(mp[x-2][y+1]==-1||mp[x-2][y+1]>js+1)) dfs(x-2,y+1,js);
    if(y-2>0&&x+1<=n&&(mp[x+1][y-2]==-1||mp[x+1][y-2]>js+1)) dfs(x+1,y-2,js);
    if(y-2>0&&x-1>0&&(mp[x-1][y-2]==-1||mp[x-1][y-2]>js+1)) dfs(x-1,y-2,js);
    
}
int main(){
    scanf("%d%d%d%d",&n,&m,&stx,&sty);
    me(mp);
    dfs(stx,sty,-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            printf("%-5d",mp[i][j]);
        printf("\n");
    }
    return 0;
}

