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
int main(){
    int n,a;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        if(a&1)
            printf("zs wins\n");
        else
            cout<<"pb wins\n";
    }
    return 0;
}

