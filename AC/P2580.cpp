#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXX=2147483647;
const int MINN=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
//inline
typedef long long ll;
map<string,int>p;
int main(){
    /*in(t);
      out(t);*/
    int n,m;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        p[s]=-1;
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>s;
        if(p[s]==-1){
            printf("OK\n");
            p[s]=1;
            continue;
        }
        if(p[s]==1){
            printf("REPEAT\n");
            continue;
        }
        printf("WRONG\n");
    }
    return 0;
}

