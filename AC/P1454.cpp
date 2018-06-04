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
char a[105][105];
int n,m,ans=0;
void dfs(int x,int y){
    a[x][y]='-';
    if(a[x-1][y]=='#'&&x-1>=0)
        dfs(x-1,y);
    if(a[x][y-1]=='#'&&y-1>=0)
        dfs(x,y-1);
    if(a[x][y+1]=='#'&&y+1<n)
        dfs(x,y+1);
    if(a[x+1][y]=='#'&&x+1<m)
        dfs(x+1,y);
    if(a[x-1][y-1]=='#'&&x-1>=0&&y-1>=0)
        dfs(x-1,y-1);
    if(a[x-1][y+1]=='#'&&y+1<n&&x-1>=0)
        dfs(x-1,y+1);
    if(a[x+1][y+1]=='#'&&y+1<n&&x+1<m)
        dfs(x+1,y+1);
    if(a[x+1][y-1]=='#'&&x+1<m&&y-1>=0)
        dfs(x+1,y-1);
    if(a[x-2][y]=='#'&&x-2>=0)
        dfs(x-2,y);
    if(a[x][y-2]=='#'&&y-2>=0)
        dfs(x,y-2);
    if(a[x][y+2]=='#'&&y+2<n)
        dfs(x,y+2);
    if(a[x+2][y]=='#'&&x+2<m)
        dfs(x+2,y);
}
int main(){
    cin>>m>>n;
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]=='#'){
            	ans++;
            	dfs(i,j);
            }
    cout<<ans;
    return 0;
}
             
