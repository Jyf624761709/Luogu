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
#define in() freopen(".in","r",stdin)
#define out() freopen(".out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
#define gc() getchar()
typedef long long ll;
int n;
map<string,int> c;
bool p[7];
string s,ans[]={"0","purple","green","blue","orange","red","yellow"};
I string ch(string s){
    if(s==ans[1]) return "Power";
    if(s==ans[2]) return "Time";
    if(s==ans[3]) return "Space";
    if(s==ans[4]) return "Soul";
    if(s==ans[5]) return "Reality";
    return "Mind";
}
/*char ss[1<<17],*A=ss,*B=ss;
I char gc(){return A==B&&(B=(A=ss)+fread(ss,1,1<<17,stdin),A==B)?EOF:*A++;}*/
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    cin>>n;
    printf("%d\n",6-n);
    for(R int i=1;i<=6;++i) c[ans[i]]=i;
    while(n--){
        cin>>s;
        p[c[s]]=1;
    }
    for(R int i=1;i<=6;++i)
        if(!p[i]) cout<<ch(ans[i])<<'\n';
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ll w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=gc();
      if (c=='-') w=-1ll, c=gc();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=gc();
      x*=w;
  }
