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
    scanf("%d\n",&n);
    cin>>s;
    fn[0]=0;
    if(s[0]=='N')
        fn[0]++;
    for(int i=1;i<n;i++){
        fn[i]=fn[i-1];
        if(s[i]=='N')
            fn[i]++;
    }
    fi[n-1]=0;
    if(s[n-1]=='I')
        fi[n-1]++;
    for(int i=n-2;i>=0;i--){
        fi[i]=fi[i+1];
        if(s[i]=='I')
            fi[i]++;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='O')
            ans+=fn[i]*fi[i];
    }
    ma=ans;
    for(int i=0;i<n;i++)
        fn[i]++;
    for(int i=0;i<n;i++){
        if(s[i]=='O')
            t+=fn[i]*fi[i];
    }
    for(int i=0;i<n;i++)
        fn[i]--;
    if(t>ma) ma=t;
    t=0;
    for(int i=0;i<n;i++)
        fi[i]++;
    for(int i=0;i<n;i++){
        if(s[i]=='O')
            t+=fn[i]*fi[i];
    }
    for(int i=0;i<n;i++)
        fi[i]--;
    if(t>ma) ma=t;
    for(int i=0;i<n;i++){
        if(ans+fn[i]*fi[i]>ma)
              ma=ans+fn[i]*fi[i];
    }
    cout<<ma;
    return 0;
}

