#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
struct pp{
    int a,b;
}s[100005];
int main(){
    int a[6],n,mxx=1<<31,ixx=6;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&s[i].a,&s[i].b);
    for(int j=1;j<=5;j++){
        int mx=1<<31,l=0;
        for(int i=1;i<=n;i++){
            if(s[i].a==j||s[i].b==j)
                l++;
            if(s[i].a!=j&&s[i].b!=j){
                if(l>mx) mx=l;
                l=0;
            }
        }
        if(l>mx)
            mx=l;
        a[j]=mx;
    }
    for(int i=5;i>=1;i--){
        if(a[i]>=mxx) {
            mxx=a[i];
            ixx=i;
        }
    }
    printf("%d %d",mxx,ixx); 
    return 0;
}

