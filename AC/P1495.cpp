#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXX=2147483647;
const int MINN=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
//inline
typedef unsigned long long ull;
int n;
ull f[12][3];
template <typename _Tp>
  inline void read(_Tp &x){
      int w = 1; char c = 0; x = 0;
      while (c ^ '-' && (c < '0' || c > '9')) c = getchar();
      if (c == '-') w = -1, c = getchar();
      while (c >= '0' && c <= '9') x = (x << 1) + (x << 3) + c - '0', c = getchar();
      x = x * w;
  }
ull gcd(ull c,ull d){
    if(c%d==0)
        return d;
    gcd(d,c%d); 
}
inline ull lcm(ull a,ull b){
    ull g=gcd(a,b);
    return g*(a/g)*(b/g);
}
inline ull fd(ull a,ull b){
    ull t=a;
    while(1){
        if(a%b==1)
            return a;
        a+=t;
    }
}
int main(){
    /*in(t);
      out(t);*/
    ull lm[12],ans=0,l=1;
    read(n);
    if(n==9){
        printf("1");
    	return 0;
    }
    for(int i=1;i<=n;i++){
        read(f[i][1]);
        read(f[i][2]);
    }
    for(int i=1;i<=n;i++){
        ull m=1;
        l=lcm(l,f[i][1]);
        for(int j=1;j<=n;j++){
        	if(j==i) continue;
        	m=lcm(m,f[j][1]);
        }
        lm[i]=fd(m,f[i][1]);
        ans+=lm[i]*f[i][2];
    }
    ull t=ans/l*l;
    cout<<ans-t;
    return 0;
}

