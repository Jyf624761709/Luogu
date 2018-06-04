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
int n,a[100010];
priority_queue<int> qa;
priority_queue<int,vector<int>,greater<int> > qb;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
    /*in();out();*/
    _(n);
    for(R int i=1;i<=n;++i)
        _(a[i]);
    if(!n&1)
        --n;
    int t;
    for(R int i=1;i<=n;++i){
    	if(i==1){
    		qa.push(a[1]);
    		printf("%d\n",a[1]);
    		continue;
    	}
    	if(i==2){
    		if(a[1]<a[2])
    			qb.push(a[2]);
    		else{
    			qb.push(a[1]);
    			qa.pop();
    			qa.push(a[2]);
    		}
    		continue;
    	}
    	t=a[i];
        if(i&1){
            if(t<qb.top())
                qa.push(t);
            else{
                qa.push(qb.top());
                qb.pop();
                qb.push(t);
            }
            printf("%d\n",qa.top());
        }
        else{
            if(qa.top()<t)
                qb.push(t);
            else{
                qb.push(qa.top());
                qa.pop();
                qa.push(t);
            }
        }
    }
    return 0;
}
