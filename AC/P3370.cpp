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
map<string,bool>p;
int main(){
    /*in(t);
      out(t);*/
    int n,ans=0;
    string s[10005];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        if(p[s[i]])
            continue;
        p[s[i]]=1;
        ans++;
    }
    cout<<ans;
    return 0;
}

