#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
//inline
typedef long long ll;
int ma=ine,n,k,a[2000005];
inline int mx(int a,int b){
    return a>b?a:b;
}
int main(){
    /*in(t);
      out(t);*/
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;++i){
        scanf("%d",&a[i]);
        if(i<=k)
            ma=mx(ma,a[i]);
    }
    printf("%d\n",ma);
    for(int i=2,j=k+1;j<=n;++i,++j){
        if(ma!=a[i-1]){
            ma=mx(ma,a[j]);
            printf("%d\n",ma);
            continue;
        }
        ma=a[i];
        for(int l=i;l<=j;++l)
            ma=mx(ma,a[l]);
        printf("%d\n",ma);
    }
    return 0;
}

