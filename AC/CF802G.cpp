#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    //in(t);out(t);
    string a;
    cin>>a;
    int l=a.size(),w=0;
    while(a[w]!='h'&&w<l) ++w;
    if(w==l){
        printf("NO");
        return 0;
    }
    while(a[w]!='e'&&w<l) ++w;
    if(w==l){
        printf("NO");
        return 0;
    }
    while(a[w]!='i'&&w<l) ++w;
    if(w==l){
        printf("NO");
        return 0;
    }
    while(a[w]!='d'&&w<l) ++w;
    if(w==l){
        printf("NO");
        return 0;
    }
    while(a[w]!='i'&&w<l) ++w;
    if(w==l){
        printf("NO");
        return 0;
    }
    printf("YES");
    return 0;
}

