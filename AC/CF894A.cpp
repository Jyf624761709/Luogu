#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
const int N=100005;
typedef long long ll;
int main(){
    string s;
    int n;
    ll ans=0,fn[N],fi[N],ma,t=0;
    cin>>s;
    n=s.size();
    fn[0]=0;
    if(s[0]=='Q')
        fn[0]++;
    for(int i=1;i<n;i++){
        fn[i]=fn[i-1];
        if(s[i]=='Q')
            fn[i]++;
    }
    fi[n-1]=0;
    if(s[n-1]=='Q')
        fi[n-1]++;
    for(int i=n-2;i>=0;i--){
        fi[i]=fi[i+1];
        if(s[i]=='Q')
            fi[i]++;
    }
    for(int i=1;i<n;i++)
        if(s[i]=='A')
            ans+=fn[i]*fi[i];
    printf("%d\n",ans);
    return 0;
}

