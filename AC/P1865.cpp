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
const int N=1000005;
int sum[N];
int p[N];
inline void pr(){
    int t=N-5;
    p[0]=1;
    p[1]=1;
    sum[0]=0;
    for(int i=2;i<=t;i++)
        if(p[i]==0)
            for(int j=i*2;j<=t;j+=i)
                p[j]=1;
    for(int i=1;i<=t;i++)
        sum[i]=sum[i-1]+(1-p[i]);
}
int main(){
    int n,m,l,r;
    pr();
    scanf("%d%d",&n,&m);
    while(n--){
        scanf("%d%d",&l,&r);
        if(l<1||r>m){
            printf("Crossing the line\n");
            continue;
        }
        printf("%d\n",sum[r]-sum[l-1]);
    }
    return 0;
}

