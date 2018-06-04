#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
priority_queue<ll,vector<ll>,greater<ll> >t;
int p[5];
int n;
void ttt(){
	p[1]=2;
	p[2]=3;
	p[3]=5;
	p[4]=7;
}
void dfs(int sum,int js,int dj){
	t.push(sum);
	if(js==12)
	    return;
	for(int i=dj;i<=4;i++)
	    dfs(sum*p[i],js+1,i);
}
int main(){
	cin>>n;
	ttt();
	t.push(1);
	dfs(1,1,1);
	for(int i=1;i<=n+1;i++){
		int ans=t.top();
		if(i==n+1){
			printf("%d",ans);
	        return 0;
		}
		t.pop();
	}
}


