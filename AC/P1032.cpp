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
map<string,bool> p;
string aa,bb;
int n;
struct KFC{
    int ct;
    string s;
};
struct MCD{
    string a,b;
}c[10];
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
queue<KFC> q;
I void bfs(){
    q.push((KFC){0,aa});
    p[aa]=1;
    while(!q.empty()){
        KFC tmp=q.front();
        q.pop();
        if(tmp.ct>10){
            printf("NO ANSWER!");
            exit(0);
        }
        if(tmp.s==bb){
            printf("%d",tmp.ct);
            exit(0);
        }
        string s;
        int len=tmp.s.size();
        for(R int i=0;i<n;++i){
            int l=c[i].a.size();
            for(R int j=0;j<=len-l;++j){
                bool id=0;
                for(R int k=0;k<l;++k)
                    if(c[i].a[k]!=tmp.s[k+j]){
                    	id=1;
                    	break;
                    }
                if(id) continue;
                string ss="";
                for(R int k=0;k<j;++k) ss+=tmp.s[k];
                int lllll=c[i].b.size();
                for(R int k=0;k<lllll;++k) ss+=c[i].b[k];
                for(R int k=j+l;k<len;++k) ss+=tmp.s[k];
                if(!p[ss]){
                    q.push((KFC){tmp.ct+1,ss});
                    p[ss]=1;
                }
            }
        }
    }
    puts("NO ANSWER!");
}
int main(){
    //in();out();
    cin>>aa>>bb;
    while(cin>>c[n].a>>c[n].b) ++n;
    bfs();
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

