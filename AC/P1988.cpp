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
typedef long long ll;
ll n,er=1;
int l=1;
ll p[105];
inline void ja(){
	bool id=0;
	for(int i=l;i>=1;i--){
	    if(!p[i]){
	        id=1;
	        p[i]=1;
	        break;
	    }
	    p[i]=0;
	}
	if(!id){
		p[++l]=0;
		p[1]=1;
	}
	er=0;
	for(int i=1;i<=l;i++)
		er=er*10+p[i];
}
int main(){
	/*in(t);
	  out(t);*/
	cin>>n;
	p[1]=1;
	while(1){
		if(er%n==0){
			cout<<er/n;
			return 0;
		}
		ja();
	}
}


