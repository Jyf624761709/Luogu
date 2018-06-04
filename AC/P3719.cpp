#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int len;int id;
char s[100010];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int work(){
    int sum=0,ans=ine;
    ++id;
    for(;s[id]!=')';++id){
        if(s[id]=='|') ans=mx(ans,sum),sum=0;
        if(s[id]=='a') ++sum;
        if(s[id]=='(') sum+=work();
    }
    ans=mx(sum,ans);
    return ans;
}
int main(){
    //in(t);out(t);
    cin>>s+1;
    len=strlen(s+1);
    s[len+1]=')';
    cout<<work();
    return 0;
}

