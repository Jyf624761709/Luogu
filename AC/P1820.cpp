#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<cstdlib>
#define I inline
#define R register
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
const int inf=2147483647;
const int ine=-2147483647;
using namespace std;
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int n,ap,fap,f[]={0,2,3,5,7,11,13,17,19,23,29};
I void dfs(int dep,ll x,int fx,int po){
    if(dep>n) return;
    if(fx>fap) fap=fx,ap=x;
    else if(fx==fap&&x<ap) ap=x;
    for(R int i=1;i<=po;++i){
        x*=f[dep];
        if(x>n) break;
        dfs(dep+1,x,fx*(i+1),i);
    }
}
int main(){
    while(~scanf("%d",&n)){
        ap=fap=-1;
        dfs(1,1ll,1,10);
        printf("%d\n",ap);
    }
    return 0;
}

