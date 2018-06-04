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
int t[100005],n,m;
int k[100005];
bool er(int l,int r,int c){
    if(l==r)
        return t[l]==c;
    if(c<=t[(l+r)/2])
        return er(l,(l+r)/2,c);
    if(c>=t[(l+r)/2])
        return er((l+r)/2+1,r,c);
}
int main(){
    int zy[100005];
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&k[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&t[i]);
    sort(t+1,t+1+m);
    for(int i=1;i<=n;i++)
        if(er(1,m,k[i])==true)
            printf("%d ",k[i]);;
    return 0;
}
                
