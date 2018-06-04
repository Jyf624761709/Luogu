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
int n,k,a[1000005];
struct KFC{
    int ai,id;
};
deque<KFC>q;
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I void mi(){
    KFC tmp;
    tmp.ai=a[1];
    tmp.id=1;
    q.push_back(tmp);
    for(R int i=2;i<k;++i){
        tmp=q.back();
        while(tmp.ai>a[i]){
            q.pop_back();
            if(q.empty())
                break;
            tmp=q.back();
        }
        tmp.ai=a[i];
        tmp.id=i;
        q.push_back(tmp);
    }
    for(R int i=k;i<=n;++i){
        tmp=q.front();
        while(tmp.id<i-k+1){
            q.pop_front();
            if(q.empty())
                break;
            tmp=q.front();
        }
        tmp=q.back();
        while(tmp.ai>a[i]){
            q.pop_back();
            if(q.empty())
                break;
            tmp=q.back();
        }
        tmp.ai=a[i];
        tmp.id=i;
        q.push_back(tmp);
        tmp=q.front();
        printf("%d\n",tmp.ai);
    }
}
int main(){
    rd(n);rd(k);
    for(R int i=1;i<=n;++i)
        rd(a[i]);
    if(k==1){
        for(R int i=1;i<=n;++i)
            printf("%d\n",a[i]);
        return 0;
    }
    mi();
    return 0;
}

