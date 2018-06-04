#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
map<string,ll> tw;
string na,d="";
char w;
ll ans=0,n,p;
int main(){
	cin>>n>>p;
	for(int i=1;i<=n;i++){
	    cin>>na;
	    cin>>tw[na];
	}
	while(scanf("%c",&w)!=EOF){
		if(('a'<=w&&w<='z')||('A'<=w&&w<='Z')||('0'<=w&&w<='9'))
		    d+=w;
		else
		    if(w!='\n'){
		        if(tw[d]>0)
		    	    ans=(ans%p+tw[d]%p)%p; 
		    	d="";
		    }
	}
	printf("%d\n",ans);
	return 0;
}


