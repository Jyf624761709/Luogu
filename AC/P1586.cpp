#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<cmath>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int p[200],n,ans=0,f[5];
bool tp[40000];
inline void d(){
    int j=0;
    for(int i=0;i<=182;i++){
        p[++j]=i*i;
        tp[p[j]]=1 ;
    }
}
void dfs(int i,int s){
    if(i==4){
        if(!tp[s])
            return;
        bool pd=1;		
        f[4]=s;             
        for(int l=1;l<4;++l){
            if(f[l]>f[l+1]){
                pd=0;
                return;
            }
        }
        if(pd)
            ++ans;
        return;
    }
    int t=(int)(sqrt)(s)+1;
    for(int j=1;j<=t;++j){
        f[i]=p[j];
        dfs(i+1,s-p[j]);
    }
}
int main(){
    int t;
    d();
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        dfs(1,n);
        printf("%d\n",ans);
        ans=0;
    }
    return 0;
}

