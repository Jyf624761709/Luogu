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
typedef long long ull;
int a,b;
/*char ss[1<<17],*A=ss,*B=ss;
I char gc(){return A==B&&(B=(A=ss)+fread(ss,1,1<<17,stdin),A==B)?EOF:*A++;}*/
template <typename _Tp> I void _(_Tp &x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in();out();
    _(a),_(b);
    if(a==1){
        if(b==1){
            puts("=");
            return 0;
        }
        puts("<");
        return 0;
    }
    if(b==1){
        if(a==1){
            puts("=");
            return 0;
        }
        puts(">");
        return 0;
    }
    if(a==2){
        if(b==1){
            puts(">");
            return 0;
        }
        if(b==2){
            puts("=");
            return 0;
        }
        if(b==3){
            puts("<");
            return 0;
        }
        if(b==4){
            puts("=");
            return 0;
        }
        puts(">");
        return 0;
    }
    if(b==2){
        if(a==1){
            puts("<");
            return 0;
        }
        if(a==2){
            puts("=");
            return 0;
        }
        if(a==3){
            puts(">");
            return 0;
        }
        if(a==4){
            puts("=");
            return 0;
        }
        puts("<");
        return 0;
    }
    if(a==3){
        if(b==1){
            puts(">");
            return 0;
        }
        if(b==2){
            puts(">");
            return 0;
        }
        if(b==3){
            puts("=");
            return 0;
        }
        puts(">");
        return 0;
    }
    if(b==3){
        if(a==1){
            puts("<");
            return 0;
        }
        if(a==2){
            puts("<");
            return 0;
        }
        if(a==3){
            puts("=");
            return 0;
        }
        puts("<");
        return 0;
    }
    if(a==4){
        if(b==1){
            puts(">");
            return 0;
        }
        if(b==2){
            puts("=");
            return 0;
        }
        if(b==3){
            puts("<");
            return 0;
        }
        if(b==4){
            puts("=");
            return 0;
        }
        puts(">");
        return 0;
    }
    if(b==4){
        if(a==1){
            puts("<");
            return 0;
        }
        if(a==2){
            puts("=");
            return 0;
        }
        if(a==3){
            puts(">");
            return 0;
        }
        if(a==4){
            puts("=");
            return 0;
        }
        puts("<");
        return 0;
    }
    if(a<b) puts(">");
    else if(a==b) puts("="); else puts("<");
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      ull w=1ll;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=gc();
      if (c=='-') w=-1ll, c=gc();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=gc();
      x*=w;
  }
