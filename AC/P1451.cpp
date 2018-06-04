#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int a[105][105];
int m,n,ans=0;
void dfs(int x,int y){
    a[x][y]=0;
    if(a[x-1][y]>0&&x-1>0)
        dfs(x-1,y);
    if(a[x][y-1]>0&&y-1>0)
        dfs(x,y-1);
    if(a[x][y+1]>0&&y+1<=n)
        dfs(x,y+1);
    if(a[x+1][y]>0&&x+1<=m)
        dfs(x+1,y);
}
int main(){
    char s[105];
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        cin>>s;
        for(int j=1;j<=n;j++)
            a[i][j]=s[j-1]-'0';
    }
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            if(a[i][j]>0){
                ans++;
                dfs(i,j);
            }
    printf("%d",ans);
    return 0;
}
        
