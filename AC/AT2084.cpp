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
string s;int len;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in(t);out(t);
    cin>>s;len=s.size();
    int id=-1;
    for(R int i=0;i<len;++i)
        if(s[i]=='C'){
        	id=i;
        	break;
        }
    if(id<0){
        puts("No");
        return 0;
    }
    for(R int i=id;i<len;++i){
        if(s[i]=='F'){
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}

