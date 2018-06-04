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
map<string,int>un;
int n,m,s[20005];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I int _find(int x){
    if(x!=s[x]) s[x]=_find(s[x]);
    return s[x];
}
I void _union(int a,int b){
    a=_find(a);b=_find(b);
    if(a==b) return;
    s[a]=b;
}
int main(){
    /*in();out();*/
    ios::sync_with_stdio(false);
    string x,y;
    cin>>n>>m;
    for(R int i=1;i<=n;++i){
        cin>>x;
        un[x]=i;
        s[i]=i;
    }
    for(R int i=1;i<=m;++i){
        cin>>x>>y;
        _union(un[x],un[y]);
    }
    int p;
    cin>>p;
    for(R int i=1;i<=p;++i){
        cin>>x>>y;
        if(_find(un[x])==_find(un[y]))
            cout<<"Yes."<<endl;
        else
            cout<<"No."<<endl;
    }
    return 0;
}

