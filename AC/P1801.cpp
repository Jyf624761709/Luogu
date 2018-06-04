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
const int N=200010;
int n,m,a[N],u,js=1;
priority_queue<int> qa;
priority_queue<int,vector<int>,greater<int> > qb,qc;
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
    _(n),_(m);
    for(R int i=1;i<=n;++i)
        _(a[i]);
    for(R int i=1;i<=m;++i){
    	_(u);
        qc.push(u);
    }
    for(R int i=1;i<=n;++i){
    	while(qa.size()<js&&!qb.empty()){
    		qa.push(qb.top());
    		qb.pop();
    	}
    	if(qa.size()<js) 
            qa.push(a[i]);
    	else
    	    if(!qa.empty()){
    			//printf("%d %d\n",qa.top(),qb.top());
    			if(a[i]<=qa.top()){
    				qb.push(qa.top());
    				qa.pop();
    		    	qa.push(a[i]);
    			}
    			else
    				qb.push(a[i]);
    		}
    	/*printf("%d ",qa.size());
    	printf("%d",qb.size());
    	puts("");*/
    	while(qc.top()==i){
    		printf("%d\n",qa.top());
    	    if(!qb.empty()){
    			qa.push(qb.top());
    			qb.pop();
    		}
    		qc.pop();
    		++js;
    		if(qc.empty()){
    			i=n;
    			break;
    		}
    	}
    }
    return 0;
}

