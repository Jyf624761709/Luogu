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
typedef long long ll;
int k,n,a[3000200],ans=ine,r=1;
struct KFC{
    int id,va;
};
deque<KFC> qm;
deque<KFC> qn;
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
    _(k),_(n);
    for(R int i=1;i<=n;++i) _(a[i]);
    for(R int l=1;l<=n;++l){
    	for(R int& i=r;i<=n;++i){
            while(!qn.empty()&&qn.front().id<l) qn.pop_front();
            while(!qm.empty()&&qm.front().id<l) qm.pop_front();
            if(qn.empty())
                qn.push_back((KFC){i,a[i]});
            else{
                while(qn.back().va>a[i]){
                    qn.pop_back();
                    if(qn.empty()) break;
                }
                qn.push_back((KFC){i,a[i]});
            }
            if(qm.empty())
                qm.push_back((KFC){i,a[i]});
            else{
                while(qm.back().va<a[i]){
                    qm.pop_back();
                    if(qm.empty()) break;
                }
                qm.push_back((KFC){i,a[i]});
            }
            if(qm.front().va-qn.front().va<=k) ans=mx(ans,r-l+1);
    		else break;
        }
    }
    printf("%d",ans);
    return 0;
}

