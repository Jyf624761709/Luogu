#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<cmath>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
typedef long long ll;
int n,tot;
string s;
struct KFC{
    int fail,vis[30];
    int end;
}e[1000010];
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void build(string s){
    int len=s.size(),now=0;
    for(R int i=0;i<len;++i){
        if(e[now].vis[s[i]-'a']==0)
            e[now].vis[s[i]-'a']=++tot;
        now=e[now].vis[s[i]-'a'];
    }
    ++e[now].end;
}
queue<int> q;
I void _fail(){
    for(R int i=0;i<26;++i)
        if(e[0].vis[i]>0) q.push(e[0].vis[i]);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(R int i=0;i<26;++i)
            if(e[u].vis[i]>0){
                e[e[u].vis[i]].fail=e[e[u].fail].vis[i];
                q.push(e[u].vis[i]);
            }
            else
                e[u].vis[i]=e[e[u].fail].vis[i];
    }
}
I int query(string s){
    int len=s.size(),now=0,ans=0;
    for(R int i=0;i<len;++i){
        now=e[now].vis[s[i]-'a'];
        for(R int j=now;j>0&&e[j].end!=-1;j=e[j].fail){
            ans+=e[j].end;
            e[j].end=-1;
        }
    }
    return ans;
}
int main(){
    //in();out();
 	cin>>n;
 	while(n--){
 		cin>>s;
 		build(s);
    }
    _fail();
    cin>>s;
    cout<<query(s);
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }

