#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
using namespace std;
typedef long long ll;
const ll M=100003;
ll m,n;
ll pow(ll a,ll t){
    ll ans=1;
        a%=M;
    while(t>0){
        if(t&1)
            ans=(ans%M*a%M)%M;
        a=(a%M*a%M)%M;
        t>>=1;
    }
    return ans;
}
int main(){
    cin>>m>>n;
    ll ans1=pow(m,n-1)%M;
    ll ans2=pow(m-1,n-1)%M;
    ll ans=ans1-ans2;
    if(ans<0) ans+=M;
    cout<<m*ans%M;
    return 0;
}

