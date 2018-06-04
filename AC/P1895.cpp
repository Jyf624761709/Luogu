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
const int N=32000;
ll id[N+5],n,k;int t;
I int po(int f){
    int s=0;
    while(f>0){
        ++s;
        f/=10;
    }
    return s;
}
I void d(){
    ll a=1ll;
    for(R int i=1;i<=N;++i,a+=(ll)po(i))
        id[i]=id[i-1]+a;
}
I void work(){
    ll js=0ll,i;
    if(n-id[k]<=0) --k;
    n-=id[k];
    for(i=1ll;js<=n;++i) 
        js+=(ll)po(i);
    --i;
    js-=po(i);
    if(n==js){
        printf("%lld\n",(i-1ll)%10);
        return;
    }/**/
    int s[25];
    int kkk=po(i);
    for(R int j=kkk;j>=1;--j)
        s[j]=i%10,i/=10;
    for(R int j=1;j<=kkk;++j)
        if(j+js==n){
            printf("%d\n",s[j]);
            return;
        }
}
int main(){
    d();
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        k=upper_bound(id+1,id+1+N,n)-id-1;
        work();
    }
    return 0;
}
